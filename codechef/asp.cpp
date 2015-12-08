#include<bits/stdc++.h>
using namespace std;
#define lx long long
vector <lx> v(1000006);
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        v.clear();
        int n,x,y,z,i;
        scanf("%d",&n);
        for (i=0;i<n;i++)
        {
            scanf("%lld",&v[i]);
        }
        for (i=0;i<n-1;i++)
        {
            bool flag = 0;
            if (v[i] > v[i+1])
                {
                    swap(v[i],v[i+1]);
                    flag = 1;
                }
            if (v[i+1]>v[i+2] && flag==1)
            {
                break;
            }
        }
        if (i >= n-2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
