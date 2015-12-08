#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x,num,den;
    cin>>t;
    while(t--)
    {
        long term;
        cin>>term;
        for (i=1;(i*i+i)<2*term;i++)
        {

        }
        x=(i*(i+1)/2)-term;
        if (i & 1)
        {

            cout<<"TERM "<<term<<" IS "<<1+x<<"/"<<i-x<<endl;
        }
        else
        {
            cout<<"TERM "<<term<<" IS "<<i-x<<"/"<<1+x<<endl;
        }
    }
    return 0;
}

