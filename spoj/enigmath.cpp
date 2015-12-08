#include<bits/stdc++.h>
using namespace std;
int gcd(int,int);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,z;
        cin>>a;
        cin>>b;
        z=gcd(a,b);
        cout<<b/z<<" "<<a/z<<endl;
    }
    return 0;
}
int gcd(int x,int y)
{
    int a,b;
    if (x>y)
        {
            a=x;
            b=y;
        }
    else
    {
        a=y;
        b=x;
    }
    int c=a%b;
    if (c==0)
        return b;
    else
        gcd(b,c);
}

