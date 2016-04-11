#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    lx int k;
    cin>>t;
    while(t--)
    {
        lx int x[3]={0};
        for (int i=0;i<3;i++)
            cin>>x[i];
        cin>>k;
        sort(x,x+3);
        if (k==1)
            cout<<1<<endl;
        else if (k<=x[0])
            cout<<3*k-2<<endl;
        else if (k<=x[1])
            cout<<x[0]+2*k-1<<endl;
        else
            cout<<x[0]+x[1]+k<<endl;
    }
    return 0;
}
