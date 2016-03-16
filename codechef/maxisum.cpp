#include<bits/stdc++.h>
using namespace std;
#define lx long long
int n,k,t;
const int maxn = 100002;
lx int a[maxn],b[maxn];
lx int sum;
lx  int bmax,id;
int main()
{
    cin>>t;
    while(t--)
    {
        bmax = 0;
        sum = 0;
        id = 0;
        cin>>n>>k;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i=0;i<n;i++)
        {
            cin>>b[i];
            sum += a[i]*b[i];
            if (b[i]<0)
            {
                if (bmax<abs(b[i]))
                    {
                        bmax = abs(b[i]);
                        id = i;
                    }
            }
            else if (bmax<b[i])
            {
                bmax = b[i];
                id = i;
            }
        }
        if ((b[id]>=0 and a[id]>=0))
         cout<<sum + k*b[id]<<endl;
        else if (b[id]<0 and a[id]<=0)
            cout<<sum + k*abs(b[id])<<endl;
        else if (b[id]>=0 and a[id]<=0)
        {
            cout<<sum + k*b[id]<<endl;
        }
        else if (b[id]<0 and a[id]>=0)
        {
            cout<<sum + k*abs(b[id])<<endl;
        }
    }
    return 0;
}
