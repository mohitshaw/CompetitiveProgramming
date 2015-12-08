#include<stdio.h>
int main()
{
    long long int n,k,f=0,g,t;
    scanf("%lld",&n);
    scanf("%lld",&k);
    for(g=0;g<n;g++)
    {scanf("%lld",&t);
        if ((t%k)==0)
            f=f+1;
    }
printf("%lld",f);
return 0;
} 
