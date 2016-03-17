#include<bits/stdc++.h>
using namespace std;
#define lx long long
const int maxn = 1e5+5;
lx int a[maxn];
lx int dp[maxn];
int main()
{
    int t,n;
    lx int sum = 0;
    cin>>t;
    while(t--)
    {
       cin>>n;
       for (int i=1;i<=n;i++)
            cin>>a[i];
       dp[n+1]=dp[n+2]=dp[n+3]=0;
       for (int i=n;i>0;i--)
       {
           sum += a[i];
           dp[i] = sum - min(dp[i+3],min(dp[i+2],dp[i+1]));
       }
       cout<<dp[1]<<endl;
       sum = 0;
    }
    return 0;
}
