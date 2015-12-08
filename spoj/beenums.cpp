#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int n;
    cin>>n;
    while(n!=-1)
    {
        for (int i=1;;i++)
        {
            x=3*i*(i-1)+1;
            if (x>=n)
                break;
        }
        if (x==n)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
        cin>>n;
    }
    return 0;
}

