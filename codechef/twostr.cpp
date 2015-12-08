#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        char a[11],b[11];
        bool tf=0;
        cin>>a>>b;
        for(int i=0;a[i]!='\0';i++)
        {
            if (!(a[i]==b[i] || b[i]=='?' || a[i]=='?'))
                tf=1;
        }
        if (tf)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
