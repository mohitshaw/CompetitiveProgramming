#include<bits/stdc++.h>
using namespace std;
long int height[20000];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int n,k;
      long int x=1000000000;
      scanf("%d%d",&n,&k);
      for(int i=0;i<n;i++)
        scanf("%ld",&height[i]);
      sort(height,height+n);
      for (int i=0;i+k<=n;i++)
        x=min(x,(height[i+k-1]-height[i]));
    printf("%ld\n",x);
    }
return 0;
}

