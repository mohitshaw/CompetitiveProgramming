#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    vector <int> a(n);
    for (int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int x;
    for (int i=0;i<m;i++)
    {
        cin>>x;
        int l=0,r=n-1,mid,ans=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if (a[mid]>x)
            {
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        if (ans==-1)
            ans=n;
        cout<<ans<<" ";
    }
    return 0;
}
