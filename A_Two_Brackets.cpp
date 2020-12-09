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
    string s;
    a=0,b=0,c=0,x=0;
    while(t--)
    {
         a=0,b=0,c=0,x=0;
         ll final=0;
        //cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin>>s;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='(') {a++;}
            if(s[i]==')' && a!=0) {a--; final++;}
            if(s[i]=='['){c++;} 
            if(s[i]==']' && c!=0) {c--; final++;}
        }
        cout<<final<<endl;
        
    }
    
    return 0;
}