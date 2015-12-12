#include<bits/stdc++.h>
using namespace std;
vector <int> a(128);
int main()
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int cost=0;
        vector <int> ::iterator it;
        for (it= a.begin();it!=a.end();it++)
            *it=0;
        for (int i=0;i<s.size();i++)
        {
           if (a[s[i]]==0)
           {
               cost++;
               a[s[i]]=1;
           }
           else a[s[i]]=0;

        }
        cout<<cost<<endl;
    }
    return 0;
}
