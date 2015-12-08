#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long val;
        long long n;
        cin>>n;
        val=(n*(n+2)*(2*n+1)/8);
        cout<<val<<endl;
    }
    return 0;
}

