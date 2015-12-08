#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,x;
    cin>>t;
    while(t--)
    {
        long long int ans=0,y=0;
        cin>>n;
        while(n--)
        {
            cin>>x;
            if (x>y)
                ans+=x-y;
            y=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}
