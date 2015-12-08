#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int t;
    int a[1000];
    cin>>t;
    while(t--)
    {
        int n,p,ans=0;
        cin>>n;
        cin>>p;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>=p)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
