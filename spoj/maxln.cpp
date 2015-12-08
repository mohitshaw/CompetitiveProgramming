#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long r;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>r;
        cout<<"Case "<<i+1<<": "<<fixed<<setprecision(2)<<4*r*r+0.25<<endl;
    }
    return 0;
}

