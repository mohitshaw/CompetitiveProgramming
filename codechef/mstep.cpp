#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,i;
scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    int n,j,k;
    scanf("%d",&n);
    long t=n*n;
    int x[t+1],y[t+1],z;
    long long int s=0;
    for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
                {
                scanf("%d",&z);
                x[z]=j;
                y[z]=k;
                }
        }

    for(j=2;j<=t;j++)
    {
        s+=abs(x[j]-x[j-1])+abs(y[j]-y[j-1]);
    }
    printf("%lld\n",s);
    }

return 0;
}
