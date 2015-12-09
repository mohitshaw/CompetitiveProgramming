#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    //ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    vector <int> a(3),b(3);
    for (int i=0;i<3;i++)
        cin>>a[i];
    for (int i=0;i<3;i++)
        cin>>b[i];
    int x,add=0;
    for (int i=0;i<3;i++)
    {
        x = a[i]-b[i];
        if (x>0)
            add += (x/2);
        else if (x<0)
            add += x;
    }
    if (add>=0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
