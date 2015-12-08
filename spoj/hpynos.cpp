#include<bits/stdc++.h>
using namespace std;
int nxtwhat(int t)
{
    int nxt=0;
    while(t)
    {
        int x=t%10;
        nxt+=x*x;
        t/=10;
    }
    return nxt;
}
int main()
{
    int t,ans=0,hit=1;
    int arr[811]={0};
    cin>>t;
    while(1)
    {
        int nxt;
        nxt=nxtwhat(t);
        if(arr[nxt]==0)
        {
            t=nxt;
            arr[nxt]=1;
            ans++;
        }
        else
        {
            hit=0;
            break;
        }
        if(t==1)
            break;
    }
    if(hit)
        cout<<ans;
    else
        cout<<-1;
    return 0;
}

