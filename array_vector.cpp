#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    //FIO


    vector <int> a[2]; //array of vectors

    a[0].push_back(1);
    a[0].push_back(2);
    a[0].push_back(3);
    a[0].push_back(4);
    a[1].push_back(20);
    a[1].push_back(21);
    //a[2].push_back(200); //not possible array size is 2
    cout<<"size "<<a[0].size()<<endl;
    cout<<"size "<<a[1].size()<<endl;

    cout<<a[0][0]<<endl;
    cout<<a[0][1]<<endl;
    cout<<a[0][2]<<endl;
    cout<<a[0][3]<<endl;
    cout<<a[1][0]<<endl;
    cout<<a[1][1]<<endl;
    //cout << typeid(a).name() << endl;


    for(int i=0; i<a[0].size(); i++)
    {
        cout<<a[0][i]<<" ";
    }
    for(int i=0; i<a[1].size(); i++)
    {
        cout<<a[1][i]<<" ";
    }

    return 0;
}
