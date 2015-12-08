#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,val,f;
    scanf("%d",&t);
    while(t--)
    {
        val=0;
        scanf("%d%d",&a,&b);
        while(a&a-1)
        {
            val++;
            a/=2;
        }
        if (a<b)
        {
            while(a!=b)
            {
            val++;
            a*=2;
            }
        }
        else
        {
            while(a!=b)
            {
            val++;
            a/=2;
            }
        }
        printf("%d\n",val);
    }
    return 0;
}
