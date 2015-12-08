#include<bits/stdc++.h>
using namespace std;
int main()
{
   char a[5];
   double lg2=log(2);
   int x[7]={1,10,100,1000,10000,100000,1000000};
   while(cin>>a)
   {
       int b,z,k;
       b=((a[0]-'0')*10+(a[1]-'0'))*(x[a[3]-'0']);

       if ((b&(b-1))==0)
        k=1;
       else
       {z=(log(b)/lg2);
        k=(b-pow(2,z))*2+1;
       }
       if (b)
            cout<<k<<endl;
        else
            break;
   }
   return 0;
}

