#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int s[10],diff,ans,m;
    for (int i=0;i<10;i++)
        cin>>s[i];
    for (int i=1;i<10;i++)
        s[i] +=s[i-1];
    diff=100-s[0];
    ans=s[0];
    for (int i=1;i<10;i++)
    {
        m=abs(100-s[i]);
        if (!(m>diff))
        {
            diff=m;
            ans=s[i];
        }

    }
    cout<<ans<<endl;
    return 0;
}

