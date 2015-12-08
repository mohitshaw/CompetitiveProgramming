#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;
int isprime(int sum)
{int i,f=0;
    for (i=2;i<=sqrt(sum);i++)
    {
        if (sum%i==0)
            {f=1;
            break;
            }
    }
    if (f==0)
        return true;
    else
        return false;
}
int main()
{
    int t,sum,i;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        sum=x+y;
        for(i=1;;i++)
        {if(isprime(sum+i)==true)
            {break;
            }
        }
        printf("%d\n",i);
    }
    return 0;
}
