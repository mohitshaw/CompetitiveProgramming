#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,s;
    int t;
    double cal;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        s=(a+b+c+d)/2;
        cal=sqrt((s-a)*(s-b)*(s-c)*(s-d));
        cout<<fixed<<setprecision(2)<<cal<<endl;
    }

    return 0;
}

