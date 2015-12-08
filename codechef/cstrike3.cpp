#include<bits/stdc++.h>
using namespace std;
#define mstr 1000010
char str[mstr];
int main()
{
    ios::sync_with_stdio(false);
    int a[26],t;
    cin>>t;
    while(t--)
    {
        int counter=0;
        cin>>str;
        for(int i=0;i<26;i++) a[i]=0;//memset(a,0,26);
        for(int i=0;str[i]!='\0';i++)
            {
                a[str[i]-'a']++;
            }
        for (int j=0;j<26;j++)
        {
            if (a[j]!=0)
                counter++;
        }
        if (counter%2)
            cout<<"Counter Terrorist"<<endl;
        else
            cout<<"Terrorist"<<endl;

    }
    return 0;
}
