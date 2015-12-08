#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    m=2*m;
    bool a[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
            cin>>a[i][j];
    }
    int sum=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j=j+2)
            sum += (a[i][j] || a[i][j+1]);
    }
    cout<<sum<<endl;
    return 0;
}
