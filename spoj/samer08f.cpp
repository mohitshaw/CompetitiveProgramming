#include<stdio.h>
int main()
{
    int N;
    int a;
    N=1;
    while(N)
    {
        scanf("%d",&a);
        if (a!=0)
            printf("%d\n",(a*(a+1)*(2*a+1)/6));
        else
            N=0;
    }
    return 0;
}

