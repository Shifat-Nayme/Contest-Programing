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
    vec num {2,7,11,15};
    map1 ma;
    int target=9;
    It1 itr;

    for(int i=0; i<num.size(); i++)
    {
        ma[num[i]]=i; //value index pair
    }
    for(itr = ma.begin(); itr!=ma.end(); itr++)
    {
        cout<<itr->F<<" "<<itr->S<<endl;
    }
  
    vec ara(2);
    for(int i=0; i<num.size(); i++){
         int com = target-num[i];
         if(ma[com] && ma[com]!=i)
         {
             ara[0]=ma[com];
             ara[1]=i;
             break;
         }
    }
    cout<<ara[0]<<" "<<ara[1]<<endl;
    return 0;
}