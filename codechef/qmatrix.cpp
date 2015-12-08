#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
   // ios::sync_with_stdio(0);
   // freopen("input.txt","r",stdin);
    int n;
    scanf("%d",&n);
    vector <int> l,r,c;
    l.resize(n+1);
    r.resize(n+1);
    c.resize(n+1);
    for (int i=1;i<=n;i++)
    {
        scanf("%lld%lld",&l[i],&r[i]);
    }
    lx int sum = 0;
    for (int i=1;i<=n;i++)
    {
        sum += (r[i]-l[i]);
    }
    sum += n;
    for (int i=1;i<=n;i++)
    {
        c[l[i]]++;
        c[r[i]+1]--;
    }
    for (int i=1;i<=n;i++)
    {
        c[i] += c[i-1];
    }
    //cout<<sum<<endl;
    int q;
    scanf("%d",&q);
    while(q--)
    {
        lx int sumcp=sum;
        int hr,vc;
        scanf("%d%d",&hr,&vc);
        sumcp = sumcp -(r[hr]-l[hr]+1);
        int totalthatkind=c[vc];
        //cout<<totalthatkind<<endl;
        sumcp -= totalthatkind;
        //cout<<sumcp<<endl;
        if (vc>= l[hr] && vc<= r[hr])
        sumcp++;
        //cout<<sumcp<<endl<<endl;
        if (sumcp&1==1)
            printf("O\n");
        else
            printf("E\n");

    }

    return 0;
}
