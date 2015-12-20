#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    vector<int> a(t);
    int m;
    cin>>m;
    int ans = 0;
    for (int i=0;i<t;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int j = 0;
    while (m>ans && j<t)
    {
        //cout<<a[j]<<endl;
        ans+=a[j++];

    }
    cout<<j;
    return 0;
}
