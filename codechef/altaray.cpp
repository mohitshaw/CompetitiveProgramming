#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
int a[maxn];
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for (int i=0;i<n;i++)
            cin>>a[i];
        for (int i=0;i<n;i++)
        {
            if (a[i]==abs(a[i]))
                a[i]=0;
            else
                a[i]=1;
        }
        int cnt = 1;
        for (int m=0;m<n;m++)
        {
            if (m==n-1)
            {
                int k;
                for (k=cnt;k>0;k--)
                    cout<<k<<" ";
                if (k == 0)
                    cout<<endl;
            }
            else if(a[m]==a[m+1])
            {
                int k;
                for (k=cnt;k>0;k--)
                    cout<<k<<" ";
                if (k == 0)
                    cnt = 1;
            }
            else
                cnt++;
        }
    }
    return 0;
}
