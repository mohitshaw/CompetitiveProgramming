#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    vector<int> m(5),w(5),x(5);
    int shack,unhack;
    for (int i=0;i<5;i++)
    {
        x[i]=500+500*i;
    }
    for (int i=0;i<5;i++)
    {
        cin>>m[i];
    }
    for (int i=0;i<5;i++)
    {
        cin>>w[i];
    }
    cin>>shack>>unhack;
    double y=0;
    for (int i=0;i<5;i++)
        {
            y += max(0.3*x[i],(1.0-m[i]*1.0/250)*x[i]-50*w[i]);
        }
    y = y + 100.0*shack - 50.0* unhack;
    cout<<y<<endl;
    return 0;
}
