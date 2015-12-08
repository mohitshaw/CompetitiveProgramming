#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
    char s[10005];
    cin>>s;
    int bleft=0,bright=0;
    int i;
    for (i=0;s[i]!='W';i++)
    {
        bleft++;
    }
    for (i++;s[i]!='\0';i++)
    {
        bright++;
    }
    //cout<<bleft<<" "<<bright<<endl;
    if (bleft==bright)
    cout<<"Chef"<<endl;
    else
    cout<<"Aleksa"<<endl;
    }
    return 0;
}
