#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Table[16] = {0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};
    int val=0;
    long long n;
    cin>>n;
    for(;n;n>>=4)
        val=val+ Table[n & 0xf];
    if (val==1)
        cout<<"TAK";
    else
        cout<<"NIE";
    return 0;
}

