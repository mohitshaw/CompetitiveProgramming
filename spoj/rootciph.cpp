#include<stdio.h>
#include<stdlib.h>
int main()
{

    int t;
    scanf("%d",&t);
    long long int a,b,c;
    while(t--)
    {

        scanf("%lld%lld%lld",&a,&b,&c);
        printf("%lld\n",(a*a)-(2*b));
    }

    return 0;
}

