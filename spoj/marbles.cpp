#include<bits/stdc++.h>
using namespace std;
long long int nCr( long long int n, long long int r )
{
    if (r * 2 > n) r = n-r;
    if (r == 0) return 1;

    long long int ans = n;
    for( int i = 2; i <= r; i++ )
    {
        ans *= (n-i+1);
        ans /= i;
    }
    return ans;
}
int main()
{
    int t;
    long long int x,y;
    cin>>t;
    while(t--)
    {
    cin>>x>>y;
    cout<<nCr((x-1),(x-y))<<endl;
    }
    return 0;
}

