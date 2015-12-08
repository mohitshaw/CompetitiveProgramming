#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,d,ans,x;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>m>>d;
        while(n--)
        {
            cin>>x;
            ans+=x/d;
            if (x%d==0)
                ans--;
        }
        if(ans>=m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

