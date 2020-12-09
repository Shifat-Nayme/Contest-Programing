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
    
    
    cin>>t;
    while(t--)
    {
       
        flg2=0;
        ll mi= 1e9;
        int indica=0;
        cin>>n;
        map1 ma;  It1 itr; vec v;
        for(int i=0;i<n; i++)
        {
            cin>>b;
            v.pb(b);
            ma[b]++;
        }
        
        for(itr=ma.begin(); itr!=ma.end(); itr++)
        {
            flg = itr->S;
            if(flg==1)
            {
                indica=1;
                flg2 = itr->F;

                if(flg2<mi)
                {
                    mi=flg2;
                }
            }
            
        }
        
        if(indica==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
           for(int j=0; j<v.size(); j++)
           {
               if(v[j]==mi)
               {
                   cout<<j+1<<endl;  
                   break;
               }
           }
        }
        
    }
    return 0;
}