#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n,k,maxi;
cin>>t;
while(t--)
{
maxi=0;
cin>>n;
cin>>k;
for(int i=k;i>2;i--)
if(n%i>maxi)
maxi=n%i;
cout<<maxi<<endl;
}
return 0;
}
