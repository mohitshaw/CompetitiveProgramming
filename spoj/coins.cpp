#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>DV;
long long int dollar(long long int x)
{
    if (x==0||x==1||x==2||x==3)
        return x;
    if (DV[x]!=0)
        return DV[x];
    long long int maxval;
    maxval=max(x,dollar(x/2)+dollar(x/3)+dollar(x/4));
    DV[x]=maxval;
    return DV[x];
}
int main()
{
    int t=10;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<dollar(x)<<endl;
    }
    return 0;
}

