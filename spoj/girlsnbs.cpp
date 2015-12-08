#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,b,x;
    cin>>g>>b;
    while(g!=-1)
    {
        if (g>=b)
        {
            if (g%(b+1))
                x=(g/(b+1)+1);
            else
                x=g/(b+1);
        }
        else
        {
            if (b%(g+1))
                x=(b/(g+1)+1);
            else
                x=b/(g+1);
        }
        cout<<x<<endl;
        cin>>g>>b;
    }
    return 0;
}

