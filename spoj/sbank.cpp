#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        map<string,int> m;
        map<string,int> :: iterator it;
        char bank[32];
        //scanf("%d",&n);
        for( scanf("%d\n", &n); n; n--)
        {
            gets(bank);
            m[(string)bank]++;
        }
        for(it = m.begin();it!=m.end();it++)
            cout<<it->first<<" "<<it->second<<endl;
        cout<<endl;
    }
    return 0;
}

