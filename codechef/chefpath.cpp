#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    //freopen("input.txt","r",stdin);
    lx int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if (n%2==1 && m%2==1)
            cout<<"No\n";
        else if (n==1 || m==1)
        {
                if (m==2 || n==2)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
        }
        else
            cout<<"Yes\n";
    }
    return 0;
}
