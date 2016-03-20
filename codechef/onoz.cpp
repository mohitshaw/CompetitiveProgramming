#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int hr[10]={0};
        int mn[10]={0};
        int h,m,x,y;
        cin>>h>>m;
        if (--h>=11)
        {
            x = h/11;
            for (int i=1;i<=x;i++)
            hr[i]++;
            for (int i=1;i<10;i++)
            hr[i]++;
        }
        else
        {
            if (h==10)
                y = 9;
            else
                y = h;
            for (int i=1;i<=y;i++)
                hr[i]++;
        }
        if (--m>=11)
        {
            x = m/11;
            for (int i=1;i<=x;i++)
            mn[i]++;
            for (int i=1;i<10;i++)
            mn[i]++;
        }
        else
        {
            if (m==10)
                y = 9;
            else
                y = m;
            for (int i=1;i<=y;i++)
                mn[i]++;
        }
        int sum = 1;
        for (int i=1;i<=9;i++)
            sum += (hr[i]*mn[i]);
        cout<<sum<<endl;
    }
    return 0;
}
