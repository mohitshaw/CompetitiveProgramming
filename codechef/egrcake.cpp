#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    //ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x = n/__gcd(n,m);
        if (x==n)
            cout<<"Yes"<<endl;
        else
            cout<<"No "<<x<<endl;
    }
    return 0;
}
