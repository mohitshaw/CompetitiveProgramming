#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        char a[12];
        cin>>a;
        int k=strlen(a);
        bool flag = 0;
        //cout<<a;
        for (int i=0;i<k/2;i++)
        {
            if (a[i]!=a[k-i-1])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}

