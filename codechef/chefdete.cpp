#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,y;
    cin>>n;
    set<int> x;
    for (int i=0;i<n;i++)
        {
           cin>>y;
           x.insert(y);
        }
    for (int i=1;i<=n;i++)
    {
        int bsize=x.size();
        x.insert(i);
        if (bsize!=x.size())
            cout<<i<<" ";
    }
    return 0;
}
