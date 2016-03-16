#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+2;
char a[maxn];
int len;
int division1(int x,int y)
{
    int flag = 0;
    for (int i=0,j=y;i<y,j<len;)
    {
        if (a[i]==a[j])
        {
            i++;
            j++;
        }
        else
        {
            flag++;
            j++;
            if (flag>1)
                return 0;
        }
    }
    return 1;
}
int division2(int x,int y)
{
    int flag = 0;
    for (int i=0,j=y;i<y,j<len;)
    {
        if (a[i]==a[j])
        {
            i++;
            j++;
        }
        else
        {
            flag++;
            i++;
            if (flag>1)
                return 0;
        }
    }
    return 1;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,what=0;
        cin>>a;
        len = strlen(a);
        // for length equal to 1
        if (len == 1)
            cout<<"NO"<<endl;
        // for even length string
        else if (len%2 == 0)
        {
            int flag = 0;
            for (i=0,j=len/2;j<len;)
            {
                if (a[i]==a[j])
                {
                        i++;
                        j++;
                        continue;
                }
                else
                	{
                		flag++;
                		break;
                	}
            }
            if (flag>0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }

        // for odd length string
        else
        {
            // to show yes
            what = division1(0,len/2) || division2(0,len/2+1);
            if (what)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
   }
