#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,x=1000001;
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++)
            cin>>a[i];
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+m);
        for (int i=0;i<m;i++)
                for(int j=0;j<n;j++)
                    x=min(x,abs(b[j]-a[i]));
        cout<<x<<endl;
    }
    return 0;
}

