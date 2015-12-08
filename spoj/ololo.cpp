#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,res=0;
    cin>>t;
    while(t--)
    {
        scanf("%d", &n);
        res^=n;
    }
    cout<<res;
    return 0;
}

