#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    int ans =0;
    for (int i=0;i<n;i++)
        cin>>a[i];
    ans = a[n-1];
    for (int i=0;i<n-k;i++)
    {
        ans = max(ans,a[i]+a[2*(n-k)-i-1]);
    }
    cout<<ans<<endl;
    return 0;
}
