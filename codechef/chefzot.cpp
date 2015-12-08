#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int i,n,last=0,ans=0,sum;
    int x;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        {
            scanf("%d",&x);
            if (x==0)
            {
                ans= max(ans,i-last);
                last = i+1;
            }
        }
         ans= max(ans,i-last);
    printf("%d\n",ans);
    return 0;
}
