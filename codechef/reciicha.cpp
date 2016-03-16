#include<bits/stdc++.h>
using namespace std;
#define lx long long
#define mod 1000003
lx int n,x;
lx int a[1000004];
void precomp()
{
    a[0]=1LL%mod;
    for (int i=1;i<1000004;i++)
    {
        a[i]=(a[i-1]*i)%mod;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    precomp();
    while(t--)
    {
    cin>>n>>x;
    x = x%mod;
    if (n>=mod)
        cout<<0<<endl;
    else
    cout<<(a[n%mod]*x)%mod<<endl;
    }
    return 0;
}
