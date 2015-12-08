#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<functional>
#include<string>
#include<cstring>
#include<cstdlib>
#include<queue>
#include<utility>
#include<fstream>
#include<sstream>
#include<cmath>
#include<stack>
#include<assert.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,maxw=0;
        scanf("%d",&n);
        int W[100005];
        for (int i=0;i<n;i++)
        {
            scanf("%d",&W[i]);
            maxw=max(maxw,(W[i]+i));
        }
        printf("%d\n",maxw);
    }
}
