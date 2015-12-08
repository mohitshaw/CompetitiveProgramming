#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll m,n,ar[37000],c,prime[10000],t;
    int flag=0;
    ar[0]=-1;
    ar[1]=-1;
    for (ll i=2;i<37000;i++)
    {
        ar[i]=0;
    }
    ll i;
    for (ll j=2;j<37000;j++)
    {
        if(ar[j]==1)
            continue;
        i=2;
        while(j*i<37000)
        {
            ar[j*i]=1;
            i++;
        }
    }
    ll k=0;
    for (i=0;i<37000;i++)
    {
        if(ar[i]==0)
        {
            prime[k++]=i;
        }
    }
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&m);
        scanf("%lld",&n);
        flag=0;
        if (m<2)
            m=2;
        for (ll x=m;x<=n;x++)
        {
            flag=1;
            for(ll y=0;prime[y]*prime[y]<=x;y++)
                {
                    if(x!=prime[y]&&x%prime[y]==0)
                        {
                            flag=0;
                            break;
                        }
                }
                if(flag)
                printf("%lld\n",x);
        }
    }
    return 0;
}
