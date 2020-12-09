#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<v[i].first<<" "<<v[j].first<<endl;
        }
    }


}