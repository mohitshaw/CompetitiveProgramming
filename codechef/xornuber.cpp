#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
int t;
cin>>t;
while(t--)
{
long long int n;
cin>>n;
if (n==1)
cout<<2<<endl;
else if (!(n&(n+1)))
{n=n>>1;
cout<<n<<endl;}
else
cout<<-1<<endl;
}
return 0;
}
