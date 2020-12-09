#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
       map <int,int>::iterator it, it2;
       map <int,int> ma;
        
        int maxi=0;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            ma[a]=b;
        }
       

      /*   for(auto i: ma)
        {
            cout<<i.first<<" "<<i.second<<endl;

        } */

        it=ma.begin();
        it2 = ma.begin();

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<it->first<<" "<<it2->first<<endl;
                it2++;
            }
            it2=ma.begin();
            it++;
        }
        
}