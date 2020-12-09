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
typedef vector <ll> vec;
typedef pair<ll,ll> pi;
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int main()
{
    FIO
    ll a,b,c,n,m,x,y,z,flg=0,flg2=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            c(0);
        }
        else if(a==2)
        {
            c(1);
        }
        else if(a==3)
        {
            c(2);
        }
        else if(a%2==0)
        {
            c(2);
        }
        else
        {
            c(3);
        }
        
    }
    return 0;
}