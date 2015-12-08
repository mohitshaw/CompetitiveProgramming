#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159

int main()
{

    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        double x,y=0;
        cin>>x;
        if (x<4)
            cout<<1<<endl;
        else
        {
            y=ceil((x*log(x)-x+(log(2.0*pi*x))/2.0)/log(10.0));
            cout<<fixed<<setprecision(0)<<y<<endl;
        }
    }
    return 0;
}

