#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    while(n!=0)
    {
        vector<lx int> c(n),price(n);
        for (int i=0;i<n;i++)
            cin>>c[i];
        for (int i=0;i<n;i++)
            cin>>price[i];
        sort(c.begin(),c.end());
        sort(price.begin(),price.end());
        reverse(price.begin(),price.end());
        lx int sum = 0;
        for (int i=0;i<n;i++)
            sum += c[i]*price[i];
        cout<<sum<<endl;
        cin>>n;
    }
    return 0;
}
