#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    ios_base::sync_with_stdio(0);
    lx int n,m;
    lx int x;
    cin>>n>>m;
    vector<lx int> val(m+1);
    for(int i = 1; i<= n; i++)
    {
        cin>>x;
        val[x]++;
    }
    lx int ans = 0;
    for(int i = 1; i<=m; i++)
    {
        if(val[i])
              ans += val[i]*(val[i]-1)/2;
    }
    cout<<(n-1)*n/2 - ans;
    return 0 ;
}
