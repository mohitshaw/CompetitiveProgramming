#include<bits/stdc++.h>
using namespace std;
bool a[1000000];
int main()
{
    ios::sync_with_stdio(0);
    int k,l,m,x;
    cin>>k>>l>>m;
    for (int i=1;i<=1000000;i++)
    {
        if (a[i-1]==0)
            a[i]=1;
        else if (i-k>=0 && a[i-k]==0)
            a[i]=1;
        else if (i-l>=0 && a[i-l]==0)
            a[i]=1;
    }
    for (int i=0;i<m;i++)
    {
        cin>>x;
        if (a[x])
            cout<<"A";
        else
            cout<<"B";
    }
    return 0;
}

