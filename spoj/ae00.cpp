#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,value=0;
    int i,j;
    cin>>n;
    x=sqrt(n);
    for (i=1;i<=x;i++)
    {
        for(j=i;j<=n;j++)
        {
            if ((j*i)<=n)
                value++;
            else
                break;
        }
    }
    cout<<value;
    return 0;
}

