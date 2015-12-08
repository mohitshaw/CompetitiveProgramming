#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int n,k;
    cin>>n>>k;
    map<int,int> m;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        m[x]++;
    }
    int ans = 0;
    for (map<int,int> :: iterator it=m.begin();it!=m.end();it++)
    {
        map<int,int> :: iterator p = m.find(it->first + k);
        if (p!=m.end())
            ans += p->second;
    }
    cout<<ans<<endl;
    return 0;
}

