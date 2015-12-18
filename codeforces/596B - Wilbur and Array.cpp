#include<bits/stdc++.h>
#define lx long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    vector<int> v(n);
    cin>>v[0];
    unsigned lx int sum=abs(v[0]);
    for (int i=1;i<n;i++)
    {
        cin>>v[i];
        sum += abs(v[i]-v[i-1]);
    }
    cout<<sum<<endl;
    return 0;
}
