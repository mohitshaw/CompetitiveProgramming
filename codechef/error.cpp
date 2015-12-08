#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
char str[100000];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {scanf("%s",str);
    int len= strlen(str);

    bool res=0;

    for(int i=0;i<len-2;i++)
        if (str[i]==str[i+2]&& str[i]!=str[i+1])
        {
            res=1;
            break;
        }
    if (res)
        printf("Good\n");
    else
        printf("Bad\n");
    }
return 0;
}
