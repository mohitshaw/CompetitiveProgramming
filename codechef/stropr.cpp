#include<bits/stdc++.h>
using namespace std;
#define lx long long
const int maxn= 1e6+6;
const int mod = 1e9+7;
lx int fac[maxn];
lx int a[maxn];
lx int den[maxn];
void precomp(int c)
{
    fac[0]=1;
    for (int i=1;i<=c;i++)
    {
        fac[i]=(fac[i-1]*i)%mod;
    }
}
lx int bin_pow(lx int b,lx int s)
{
    if (s==0) return 1;
    if (s==1) return b%mod;
    lx int d = bin_pow(b,s/2);
    d = (d*d)%mod;
    if (s%2==1)
        d = (d*b)%mod;
    return d;
}
lx int f(int n,lx int k)
{
    if (n==0) return 1;
    if (k==0) return 0;
    if (k==1) return 1;
    if (n==1) return (k%mod);
    return (den[n-2]*bin_pow(fac[n-1],mod-2))%mod;
}
int main()
{
    ios::sync_with_stdio();
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        lx int k;
        cin>>n>>c>>k;
        for (int i=1;i<=n;i++)
        {
            cin>>a[i];
            a[i]%=mod;
        }
        precomp(c);
        den[0] = k%mod;
        k = k%mod;
        for (int i=1;i<=c;i++)
        {
            den[i] = (den[i-1]*(k+i))%mod;
        }
        lx int ans = a[c];
        for (int i=1;i<c;i++)
        {
            ans += (a[c-i]*1ll*f(i+1,k))%mod;
            ans %= mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
