#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> v(t);
    for (int i=0;i<t;i++)
        cin>>v[i];
    int ans = v[0];
    if (t>1)
        ans+= v[1];
    for(int i=2;i<t;i++)
    {
        if (v[i]==1)
        {
            ans++;
            if (v[i-1]==0 && v[i-2]==1)
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
