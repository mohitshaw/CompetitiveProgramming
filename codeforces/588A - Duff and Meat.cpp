#include<bits/stdc++.h>
using namespace std;
vector <pair <int,int> > v;
int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        v.push_back(make_pair(x,y));
    }
    int factor,carry,sum=0;
    for (int j=0;j<t;)
    {
        factor = v[j].second;
        carry = v[j].first;
        while(factor < v[++j].second && j<t)
            carry += v[j].first;
        sum += carry * factor;
    }
    printf("%d",sum);
    return 0;
}
