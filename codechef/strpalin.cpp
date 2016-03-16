#include<bits/stdc++.h>
using namespace std;
char a[1002],b[1002];
int main()
{
    int lena,lenb,t;
    cin>>t;
    while(t--)
    {
        bool flag = 0;
        int val[26]={0};
        cin>>a>>b;
        lena =  strlen(a);
        lenb = strlen (b);
        for (int i=0;i<lena;i++)
        {
            val[a[i]-'a']++;
        }
        for (int j=0;j<lenb;j++)
        {
           if (val[b[j]-'a']!=0)
           {
               flag = 1;
               break;
           }
        }
        if (flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
