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

vec graph[5];
bool visited[5];

void DFS(int source)
{
    visited[source]=1;
    for(int i=0; i<graph[source].size(); i++)
    {
        int next = graph[source][i];
        if(visited[next]==0)
        {
            DFS(next);
        }
    }
}

int main()
{
    FIO
    ll a,b,c,t,n,m,x,y,z,flg=0,flg2=0,sum=0,temp=0;
    int nodes, edges;
    cin>>nodes>>edges;
    for(int i=0; i<edges; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }

    DFS(0);

    for(int i=0; i<nodes; i++)
    {
        if(visited[i]==1)
        {
            cout<<"node "<<i<<" is visited "<<endl;
        }
        else
        {
            cout<<"node "<<i<<" is not visited "<<endl;
            
        }
      
    }
    
    return 0;
}