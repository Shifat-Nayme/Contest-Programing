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
typedef vector <ll> vec;
typedef pair<ll,ll> pi;
typedef map <ll, ll> map1, map2;
typedef map <ll, ll>::iterator It1, It2;
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}


int main()
{
    FIO
    ll a,b,c,t,n,m,x,y,z,flg=0,flg2=0,sum=0,temp=0;
    string s; 
    ll rep,need;
    cin>>s>>n;
    x = s.length();
    rep = n/x;
    need = n%x;
    char aa;
    for(int i=0; i<x; i++)
    {
        if(s[i]=='a') sum++;
    }
    sum = sum*rep;
    for(int i=0; i<need; i++)
    {
        if(s[i]=='a')sum++;
    }
    cout<<sum<<endl;
    return 0;
}