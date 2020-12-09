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
typedef map <ll, ll> mp1, mp2;
typedef map <ll, ll>::iterator It1, It2;
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}


int main()
{
    FIO
    ll a,b,c,t,n,m,x,y,z,flg=0,flg2=0;
    cin>>n;
    vec v;
    ll sum=1e9;
    for(int i=0; i<n; i++)
    {
        cin>>b;
        v.pb(b);
    }
    for(int t=1; t<=100; t++)
    {
        int cost =0;
        for(int i=0; i<n; i++)
        {
            if(abs(v[i]-t)>1)
            {
                cost += abs(v[i]-t)-1;
                //cout<<"cost="<<cost<<endl;
            }
        }
        if(cost<sum)
        {
            sum=cost;
            flg=t;
        }
    }
    cout<<flg<<" "<<sum<<endl;

    return 0;
}