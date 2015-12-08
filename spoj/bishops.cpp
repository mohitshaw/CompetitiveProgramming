#include<bits/stdc++.h>
using namespace std;
int main()
{
    char chess[102];
    int bishop[102];
    int i;
    while(scanf("%s",chess)!=EOF)
    {
        int j=0;
    //taking the input
    if (strlen(chess)==1 && chess[0]==49)
        cout<<1<<endl;
    else
    {
        for(int i=strlen(chess)-1;i>=0;i--)
            bishop[j++]=chess[i]-'0';
    }
    //doubling input
    int c=0,x;
    for (i=0;i<j;i++)
    {
        x=bishop[i]*2+c;
        bishop[i]=x%10;
        c=x/10;
    }
    if (c>0)
    {
        bishop[i]=c;
        j=i;
    }
    else
        j=i-1;
    //subtracting 2
    c=2;
    for(int i=0;i<=j;i++)
    {
        if (bishop[i]>=c)
        {
            bishop[i]-=c;
            break;
        }
        else
        {
            bishop[i]+=10-c;
            c=1;
        }
    }
    //dislpaying part
    if (bishop[j]>0)
        cout<<bishop[j];
    for(int i=j-1;i>=0;i--)
        cout<<bishop[i];
    cout<<endl;
    }
    return 0;
}

