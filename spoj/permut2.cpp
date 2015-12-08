#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,i,p[100000],inv[100000];
    scanf("%d",&t);
    while(t)
    {
    for (i=0;i<t;i++)
    {
        scanf("%d",&p[i]);
        inv[p[i]-1]=i+1;
    }
    for (i=0;i<t;i++)
    {
        if (inv[i]!=p[i])
            break;
    }
    if (i!=t)
        cout<<"not ambiguous\n";
    else
        cout<<"ambiguous\n";
    cin>>t;
    }
    return 0;
}

