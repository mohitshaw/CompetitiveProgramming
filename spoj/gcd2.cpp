#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y);
int mod(char x[],int y);
int main()
{
    int t,a;
    char b[251];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%s",&a,b);
        if (a==0)
                printf("%s\n",b);
        else
            printf("%d\n",gcd(a,mod(b,a)));
    }
    return 0;
}
int gcd(int x,int y)
{
    return !y?x:gcd(y,x%y);
}
int mod(char x[],int y)
{
    int rem=0,i;
    for(i=0;x[i];i++)
    {
        rem=10*rem+(x[i]-48);
        rem=rem%y;
    }
    return rem;
}


