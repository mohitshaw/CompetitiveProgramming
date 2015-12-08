#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,tcopy;
    long long int total,x;
    cin>>n;
    while(n--)
    {
        cin>>t;
        tcopy=t;
        total=0;
        while(t--)
        {
            cin>>x;
            total+=x;
            total%=tcopy;
        }
        if (total==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

