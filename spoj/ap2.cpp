#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,sum,n,d,a,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>sum;
        n=(sum*2)/(x+y);
        d=(y-x)/(n-5);
        a=x-2*d;
        x=a;
        cout<<n<<endl;
        cout<<a;
        for(int i=0;i<n-1;i++)
            {
                x=x+d;
                cout<<" "<<x;
            }
        cout<<endl;
    }
    return 0;
}

