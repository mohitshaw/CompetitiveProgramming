#include<iostream>
using namespace std;

int reverse(int n);
int main()
{
 int a,b,t;
 cin>>t;
 while(t--)
 {
    cin>>a>>b;

    int e=reverse(a)+reverse(b);
    cout<<reverse(e)<<endl;

 }
 return 0;
}

 int reverse(int n)
 {   int rev=0;
     while(n>0)
     {
     int r=n%10;
     rev=rev*10+r;
     n=n/10;
     }
     return rev;
 }
