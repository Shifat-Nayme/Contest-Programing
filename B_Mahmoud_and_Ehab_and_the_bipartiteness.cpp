#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>
#define ll long long int
#define pb emplace_back
#define mp make_pair
#define endl "\n"
#define F first
#define S second
#define c(a) cout<<(a)<<"\n"
#define all(c) c.begin(), c.end()
#define ps(x,y) fixed<<setprecision(y)<<x
typedef vector <ll> vec;
typedef pair<ll,ll> pi;
typedef map <ll, ll> map1, map2;
typedef map <ll, ll>::iterator It1, It2;
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}

vec graph[1000000];
bool visited[1000000];
vec color;

void DFS(int node, int colr)
{
    visited[node]=1;
    color[node]=colr;
    for(int i=0; i<graph[node].size(); i++)
    {
        int child = graph[node][i];
        if(visited[child]==0)
        {
            DFS(child, colr^1);
        }
    }
}

int main()
{
    FIO
    ll a,b,c,t,n,m,x,y,u,v,z,flg=0,flg2=0,sum=0,temp=0;
    ll node;
    cin>>node;
    color.assign(node+10,-1);
    for(int i=0; i<node-1; i++)
    {
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
        flg++;
    }

    DFS(1,0);
    
    a=0,b=0;
     for(int i=1; i<=node; i++)
    {
        if(color[i]==1)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    ll ans = a*b-flg;
    cout<<ans<<endl;
    return 0;
}