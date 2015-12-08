#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        double ans=0;
        for(int i=1;i<=n;i++)
        {
            ans+=n/double(i);
        }
        cout<<fixed<<setprecision(2)<<ans<<endl;
    }
    return 0;
}

