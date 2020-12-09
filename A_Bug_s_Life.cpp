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



bool DFS(int node, int col, bool visited[], vec color,vec graph[])
{
    visited[node]=1;
    color[node]=col;
    for(int i=0; i<graph[node].size(); i++)
    {
        int child = graph[node][i];
        if(visited[child]==0)
        {
            if(DFS(child, col^1,visited,color,graph)==false)
            {
                return false;
            }
        }
        else
        {
            if(color[child]==color[node])
            {
                return false;
            }
        }
    }
    return true;
}
bool biparted(int node, int col, bool visited[], vec color,vec graph[])
{
    for(int i=1; i<=node; i++)
    {
        if(visited[i]==0)
        {
             if(DFS(i,col,visited,color,graph)==false)
            {
                return false;
            }
            else
            {
                return true;
            }
        }   
    }
    return true;
}

int main()
{
    FIO
    ll a,b,c,t,n,m,u,v,x,y,z,flg=0,flg2=0,sum=0,temp=0;
    cin>>t;
    flg=1;
    
    while(t--)
    {
        cin>>u>>v;
        vec graph[u+1];
        bool visited[u+1];
        vec color;
        color.assign(u+1,-1);

        for(int i=0; i<v; i++)
        {
            cin>>a>>b;
            graph[a].pb(b);
            graph[b].pb(a);
        }

        cout<<"Scenario "<<"#"<<flg<<":"<<endl;

        if(biparted(u,0,visited,color,graph)==true)
        {
            cout<<"No suspicious bugs found!"<<endl;
        }
        else
        {
            cout<<"Suspicious bugs found!"<<endl;
        }
    
        flg++;
    }
    return 0;
}