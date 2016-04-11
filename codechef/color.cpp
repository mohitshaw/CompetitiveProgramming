#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int t,n;
    cin>>t;
    char a[100005];
    while(t--)
    {
        int k[3]={0};
        cin>>n;
        cin>>a;
        for (int i=0;i<n;i++)
        {
            if (a[i]=='R')
                k[0]++;
            else if (a[i]=='G')
                k[1]++;
            else
                k[2]++;
        }
        sort (k,k+3);
        cout<<k[0]+k[1]<<endl;
    }
    return 0;
}
