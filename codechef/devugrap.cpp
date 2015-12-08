#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,x,ans;
    cin>>t;
    while(t--)
    {
       ans=0;
        cin>>n>>k;
        while(n--)
        {
            cin>>x;
            if(x/k==0)
            ans+=k-(x%k);
            else
                ans+=min((x%k),(k-(x%k)));
        }
        cout<<ans<<endl;
    }
    return 0;
}
