#include<bits/stdc++.h>
using namespace std;
int main()
{
   // ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int t;
    int r[30]={};
    scanf("%d",&t);
    while(t--)
    {
        int a=0,v;
        string s;
        cin>>s;
        memset(r,0,sizeof(r));
        int l = s.size();
        if (l<=8)
        {
            printf("NO\n");
            continue;
        }
        for (int i=0;i<l;i++)
        {
            v = s.at(i)-65;
            r[v]++;
        }
        if ((r[11]>=2) && (r[19]>=2) && (r[8]>=2) && (r[12]>=2) && ((r[4]>=2) || ((r[4]==1) && l==9)))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
