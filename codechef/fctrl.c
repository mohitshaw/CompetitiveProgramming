#include<stdio.h>
int main()
{
long int n,k,i,m;
scanf("%ld",&n);
for (i=0;i<n;i++)
{
    scanf("%ld",&k);
    for(m=0;k>=5;)
    {
     k=k/5;
     m=m+k;
    }
    printf("%ld\n",m);
}
    return 0;
} 
