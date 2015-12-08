#include<bits/stdc++.h>
using namespace std;
int prime[1000001];
void sieve()
{
prime[0] = 1;
prime[1] = 1;
for(long long i=2;i<=1000000;i++)
    {
        if(!prime[i])
         {
            prime[i]=i;
            for(long long j=i; j*i<=1000000; j++)
            {
                prime[ j*i] =i;
            }
        }
    }
}
long long int etf(int x)
{
    long long int ans=1;
    for( ; x > 1 ; )
        {
            int p=prime[x],e=0;
            for(;x%p==0;x/=p,e++);
            ans=ans*((p-1)*(pow( p, e-1)));
        }
        return ans;
}
int main()
{
    sieve();
    int t;
    scanf("%d",&t);
    while(t--)
        {
            int x;
            scanf("%d", &x) ;
            long long int ans = etf(x);
            printf("%lld\n", ans) ;
        }
    return 0;
}

