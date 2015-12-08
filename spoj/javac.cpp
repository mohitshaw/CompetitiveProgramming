#include<bits/stdc++.h>
using namespace std;
//0=common 1-c 2-java 3-error
int main()
{
    int x,i,j,flag;
    char a[101],y[210];
    while(scanf("%s",a)==1)
    {
        x=strlen(a);
        flag=0;
        if (a[0]=='_' || a[0]<'a')
            cout<<"Error!"<<endl;
        else
        {
            for(i=j=0;i<x;i++)
            {
                if(!flag && a[i]=='_')
                    flag=1;
                if(!flag && isupper(a[i]))
                    flag=2;
                if((flag==1 && isupper(a[i])) ||(flag==2 && a[i]=='_'))
                   {
                       flag=3;
                       break;
                   }
                if(!(isupper(a[i]) || islower(a[i]) || a[i]=='_'))
                {
                    flag = 3;
                    break;
                }
                if(flag==1 && a[i]=='_')
                   {
                       if(!islower(a[i+1]))
                        {
                            flag = 3;
                            break;
                        }
                        else
                            y[j++]=a[++i]-32;
                   }
                else if (flag==2 && isupper(a[i]))
                {
                    y[j++]='_';
                    y[j++]=a[i]+32;
                }
                else
                    y[j++]=a[i];
            }
            y[j]=0;
            if (flag==3)
                cout<<"Error!"<<endl;
            else
                cout<<y<<endl;
        }
    }
    return 0;
}

