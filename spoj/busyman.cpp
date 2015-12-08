#include<bits/stdc++.h>
using namespace std;
pair< int, int > task[100001];
inline bool rev(const pair <int,int> &a,const pair<int,int> &b)
{
    return (a.second==b.second)? a.first<b.first:a.second<b.second;
}
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for (int i=0;i<n;i++)
        {
            cin>>task[i].first>>task[i].second;
        }
        sort(task,task+n,rev);
        int ans=0,last=-1;
        for(int i=0;i<n;i++)
        {
            if (task[i].first>=last)
            {
                ans++;
                last = task[i].second;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

