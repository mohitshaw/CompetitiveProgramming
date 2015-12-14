#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        lx int n1,n2,m;
        cin>>n1>>n2>>m;
        lx int minx = min(min(n1,n2),((m*(m+1)/2)));
        cout<<n1+n2-2*minx<<endl;
    }
    return 0;
}
