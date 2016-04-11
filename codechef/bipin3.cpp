#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define lx long long
lx int exp(lx int a, lx int p )
{
lx int result = 1;
 if (p==0)
    return 1;
 if (p==1)
    return a;
while(p)
{
    if(p&1)
        result = ((result%mod)*(a%mod));
    result%=mod;
    p >>=1;
    a = (a%mod)*(a%mod);
    a = a%mod;
}
return result;
}
int main()
{
    int t;
    lx int n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if (n==1 && k==1)
            cout<<1<<endl;
        else
            cout<<((k*exp(k-1,n-1)))%mod<<endl;
    }
    return 0;
}
