#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,x;
    char op;
    cin>>t;
    while(t--)
    {
        cin>>a>>op;
        x=a;
        while(op=='+'|| op=='-'|| op=='*'|| op=='/')
        {
            cin>>b;
            switch(op)
            {
                case  '+':  x+=b;
                            break;
                case  '-':  x-=b;
                            break;
                case  '*':  x*=b;
                            break;
                case  '/':  x/=b;
                            break;
            }
             cin>>op;
        }
        cout<<x<<endl;
    }
    return 0;
}

