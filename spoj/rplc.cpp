#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    //ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        lx int sum = 0,x,res=10000000;
        int total;
        cin>>total;
        while(total--)
        {
            cin>>x;
            sum +=x;
            res = min(res,sum);
        }
        if (res>0)
            cout<<"Scenario #"<<i<<": "<<res<<endl;
        else
            cout<<"Scenario #"<<i<<": "<<(-1*res+1)<<endl;
    }
    return 0;
}

