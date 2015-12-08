#include<bits/stdc++.h>
using namespace std;
vector <pair <int , int> > s;
int main()
{
    ios::sync_with_stdio(0);
    //freopen("A-large-practice.in","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        int c;
        scanf("%d",&c);
        int item,x;
        scanf("%d",&item);
        s.clear();
        for (int j=1;j<=item;j++)
            {
                scanf("%d",&x);
                s.push_back(make_pair(x, c-x));
            }
        for (int j=0;j<item;j++)
        {
            for (int k=j+1;k<item;k++)
            {
                if (s[j].first == s[k].second)
                {
                    printf("Case #%d: %d %d\n",i,j+1,k+1);
                    break;
                }
            }
        }

    }
    return 0;
}
