#include<bits/stdc++.h>
int main()
{
long int n,k,i=0,m;
scanf("%ld",&n);
while(i<n)
{
    scanf("%ld",&k);
    for(m=0;k>=5;)
    {
     k=k/5;
     m=m+k;
    }
    printf("%ld\n",m);
    i++;
}
    return 0;
}
