#include<bits/stdc++.h>
using namespace std;
int no_12=0,no_14=0,no_34=0;
int total();
int main()
{
    int t,x,y;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>x>>c>>y;
        if (x==1)
            if(y==2)
                no_12++;
            else
                no_14++;
        else
            no_34++;
    }
    cout<<total()<<endl;
    return 0;
}
int total()
{

    int x;
    x=no_34+(no_12)/2;
    if (no_12%2)
    {
        x++;
        if (no_14>1)
                no_14 = no_14-2;
        else
            no_14=0;
    }
    if (no_14>no_34)
    {
        no_14 = no_14-no_34;
    if (no_14%4)
        return (x+2+no_14/4);
    else
        return (x+1+no_14/4);
    }
    else
        return (x+1);
}


