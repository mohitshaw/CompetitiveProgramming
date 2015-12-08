#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<((3*n*n+n)/2)%1000007<<endl;
    }
    return 0;
}

