#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    ios::sync_with_stdio(0);
    lx int a,b;
    cin>>a>>b;
    if (a&1)
        {
            a = (a+1)/2;
            a *=a;
        }
    else
    {
        a = a/2;
        a *=a;
    }
    if (b&1)
        {
            b = (b+1)/2;
            b *=b;
        }
    else
    {
        b = b/2;
        b *=b;
    }
    cout<<b-a<<endl;
    return 0;
}

