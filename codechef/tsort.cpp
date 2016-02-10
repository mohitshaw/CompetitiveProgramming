#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+1;
int main()
{
    int a[maxn];
    int t,x;
    memset(a,0,sizeof(a));
    scanf("%d",&t);
    for (int i=0;i<t;i++)
        {
            scanf("%d",&x);
            a[x]++;
        }
    for (int i=0;i<maxn;i++)
    {
        if (a[i])
            while(a[i]--)
            printf("%d\n",i);
    }
    return 0;
}
