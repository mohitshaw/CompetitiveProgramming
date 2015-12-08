#include<bits/stdc++.h>
using namespace std;
#define nsize 200005
int main()
{
    char a[nsize],b[nsize];
    long long int t,x,val,i,aval,bval;
    scanf("%lld",&t);
    while(t--)
    {
        bool fl=0;
        val=0;
        aval=0;
        bval=0;
        scanf("%s",a);
        scanf("%s",b);
        x=strlen(a);
        for(i=0;i<x;i++)
        {
            if(a[i]=='#' && b[i]=='#')
                break;
        }
        if (i!=x)
            printf("No\n");
        else
        {
            printf("Yes\n");
            if (a[0]=='#')
                fl=1;
            else
                fl=0;
            for(i=0;i<x;i++)
            {
                switch(fl)
                {
                    case 0: if (a[i]=='#')
                                {
                                fl=1;
                                aval++;
                                }
                                break;
                    case 1: if (b[i]=='#')
                                {
                                fl=0;
                                aval++;
                                }
                                break;
                }
            }
            if (b[0]=='#')
                fl=1;
            else
                fl=0;
            for(i=0;i<x;i++)
            {
                switch(fl)
                {
                    case 0: if (b[i]=='#')
                                {
                                fl=1;
                                bval++;
                                }
                                break;
                    case 1: if (a[i]=='#')
                                {
                                fl=0;
                                bval++;
                                }
                                break;
                }
            }
            val=min(aval,bval);
            printf("%lld\n",val);
        }
    }

    return 0;
}
