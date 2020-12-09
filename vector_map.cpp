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


int main()
{
    FIO
    ll a,b,c,t,n,m,x,y,z,flg=0,flg2=0,sum=0,temp=0;
    cin>>n;
    vec v(n);
    //vec v1[5];
    map1 ma;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        ma[v[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<endl;
    }
    for(auto j:ma){
            cout<<j.F<<" "<<j.S<<endl;
            a = j.F;
        }
        cout<<a<<endl;
    return 0;
}