#include<bits/stdc++.h>
using namespace std;
char a[100001];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int len = strlen(a);
        int x,y,z;
        x = 0;
        for (int i=1;i<=len;i++)
        {
            if ((a[i]>='1' and a[i]<='9') or a[i]=='\0')
                {
                    y = i;
                    z = a[x]-'0';
                    for (int l=0;l<z;l++)
                    {
                    for (int k=x+1;k<y;k++)
                    {
                        cout<<a[k];
                    }
                    }
                    x = y;
                }
        }
        cout<<endl;
    }
    return 0;
}
