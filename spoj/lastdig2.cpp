#include<bits/stdc++.h>
using namespace std;
int get_dig(int base,long long int index)
{
    int ans=1;
    while(index>0)
    {
       if(index%2==1)
       ans=(ans*base)%10;
       base=(base*base)%10;
       index/=2;
    }
    return ans%10;
}
int main()
{
    int t,base,value,blue_len;
    long long int index;
    char blue[1001];
    cin>>t;
    while (t--)
    {
        cin>>blue>>index;
        blue_len=strlen(blue);
        base=blue[blue_len-1]-'0';
        value=get_dig(base,index);
        cout<<value<<endl;
    }

    return 0;
}

