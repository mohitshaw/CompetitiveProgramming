#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n,a1,a2;
    cin>>n>>a1>>a2;
    int diff1,diff2,mark=1,from=0,ans=2;
    diff1 = a2-a1;
    a1=a2;
    for (int to=2;to<n;to++)
    {
        cin>>a2;
        diff2=a2-a1;
        if (diff2!=0)
        {
            if (diff1==diff2)
                from = mark;
            else
                diff1=diff2;
            mark=to;
        }
        ans=max(ans,to-from+1);
        a1=a2;
    }
    cout<<ans<<endl;
    return 0;
}
