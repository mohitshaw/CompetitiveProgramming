#include<bits/stdc++.h>
using namespace std;
string str[6];
bool compare_fun(int x,int y, int z);
int main()
{
    int t,ans;
    bool a,b,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        ans=0;
        for(int i=0;i<6;i++)
            cin>>str[i];
            a=compare_fun(0,2,4);
            b=compare_fun(0,2,5);
            c=compare_fun(0,3,4);
            d=compare_fun(0,3,5);
            e=compare_fun(1,2,4);
            f=compare_fun(1,2,5);
            g=compare_fun(1,3,4);
            h=compare_fun(1,3,5);
        if (a||b||c||d||e||f||g||h)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
bool compare_fun(int x,int y, int z)
{
    if((str[x].compare(str[y])==0) && (str[x].compare(str[z]) ==0))
        return 1;
    else
        return 0;
}
