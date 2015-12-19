#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<abs(abs(a-b)/__gcd(a,b))<<endl;
    }
    return 0;
}
