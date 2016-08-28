#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,firstval,nxtunnecessary;
    string who;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>who;
        cin>>firstval;
        for (int i=1;i<n;i++)
        {
            cin>>nxtunnecessary;
        }
        if ((who=="Dee") && (n==1) && (firstval%2==0))
            cout<<"Dee\n";
        else
            cout<<"Dum\n";
    }
    return 0;
}
