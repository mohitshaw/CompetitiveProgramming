#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int t=10;
    char total[101],diff[101];
    while(t--)
    {   int carry;
        int i,j,k,a,b,d;
        int total_len;
        int diff_len;
        char klaudia[101];
        char natalia[101];
        char temp[101];
        scanf("%s",total);
        total_len=strlen(total);
        scanf("%s",diff);
        diff_len=strlen(diff);
        for(i=total_len-1, j=diff_len-1, k=carry=0; i>=0 || j>=0 || carry; i--, j--, k++)
        {
            a =i>=0? total[i]-'0':0;
            b = j>=0? diff[j]-'0' : 0;
            temp[k] = (a+b+carry)%10 + '0';
            carry = (a+b+carry)/10;
        }
        temp[k] = 0;
        strcpy(klaudia,"0");
        for(i=k-1, j=a=d=0; i>=0; i--)
        {
            b = (a*10 + temp[i]-'0') / 2;
            a = (a*10 + temp[i]-'0') % 2;
            if(b) d = 1;
            if(d) klaudia[j++] = b+'0';
        }
        if(!j) j++;
        klaudia[j] = 0;
        for(i=total_len-1, j=diff_len-1, k=carry=0; i>=0; i--, j--, k++)
        {
            a = total[i]-'0';
            b = j>=0? diff[j]-'0' : 0;
            if(a < b+carry)
            {
                temp[k] = (10+a-b-carry) + '0';
                carry = 1;
            }
            else
            {
                temp[k] = a-b-carry + '0';
                carry = 0;
            }
        }
        temp[k] = 0;
        strcpy(natalia,"0");
        for(i=k-1, j=a=d=0; i>=0; i--)
        {
                b = (a*10 + temp[i]-'0') / 2;
                a = (a*10 + temp[i]-'0') % 2;
                if(b)  d = 1;
                if(d) natalia[j++] = b+'0';
        }
        if(!j) j++;
        natalia[j] = 0;
        cout<<klaudia<<endl<<natalia<<endl;
    }
return 0;
}

