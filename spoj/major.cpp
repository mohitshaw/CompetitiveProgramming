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
        int n;
        cin>>n;
        map<int,int> m;
        for (int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        bool flag = 0;
        for (map<int,int>::iterator it = m.begin(); it != m.end();it++)
        {
            if (it->second>n/2)
            {
                flag = 1;
                cout<<"YES "<<(it->first)<<endl;
                break;
            }
        }
        if (flag == 0)
            cout<<"NO"<<endl;
        m.clear();
    }
    return 0;
}

