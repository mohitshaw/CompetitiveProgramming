#include<bits/stdc++.h>
using namespace std;
char str[1000000];
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
        {
            cin>>str;
            int len = strlen(str);
            j = len;
            i = -1;
            while(++i <= --j)
            {
                if(str[i] != str[j])
                {
                    break;
                }
            }
        if(j < i)
        {
            if(len & 1 && str[len/2]<'9')
            {
                str[len/2]++;
                cout<<str<<endl;
            }
            else
                {
                    if (len & 1)
                    {
                        str[len/2] = '0';
                        j = len/2 + 1;
                    }
                    else
                    {
                        j=len/2;
                    }
                    i = len/2 - 1;

                    while(i >= 0)
                    {
                        if(str[i] < '9')
                        {
                            str[i]++;
                            str[j]++;
                            break;
                        }
                        else
                        {
                            str[i] = str[j] = '0';
                        }
                    i--;
                    j++;
                    }
                    if(i < 0)
                    {
                        cout<<"1";
                        i = len;
                        while(--i > 0)
                        {
                            cout<<"0";
                        }
                        cout<<"1"<<endl;
                    }
                    else
                    {
                        cout<<str<<endl;
                    }
                }
        }
        else
        {
            if(len & 1)
            {
                i = len/2 - 1;
                j = len/2 + 1;
            }
            else
            {
                i =len/2 - 1;
                j = len/2;
            }
            int flag;
            while(i >= 0)
            {
                if(str[i] - str[j] > 0)
                {
                    flag = 1;
                    break;
                }
                else if( str[i] - str[j] < 0 )
                {
                    flag = 2;
                    break;
                }
                i--;
                j++;
            }
            if(len & 1)
            {
                i = len/2 - 1;
                j = len/2 + 1;
            }
            else
            {
                i = len/2 - 1;
                j = len/2;
            }
            if(flag == 1)
            {
                while(i >= 0)
                {
                    str[j] = str[i];
                    i--;
                    j++;
                }
            }
            else if(flag == 2 && len&1 && str[len/2] < '9')
            {
                str[len/2]++;
                i = len/2 - 1;
                j = len/2 + 1;
                while(i >= 0)
                {
                   str[j] = str[i];
                   i--;
                   j++;
                }
            }
            else
            {
                if( len & 1)
                {
                    str[len/2] = '0';
                }
                while(i >= 0)
                {
                    if(str[i] < '9')
                    {
                        str[i]++;
                        str[j] = str[i];
                        break;
                    }
                    else
                    {
                        str[i] = str[j] = '0';
                    }
                    i--;
                    j++;
                }
                while(i >= 0)
                {
                    str[j] = str[i];
                    i--;
                    j++;
                }
            }
            cout<<str<<endl;
        }
    }
    return 0;
}

