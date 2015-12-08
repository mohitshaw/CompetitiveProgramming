#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t)
    {
        int counter=0;
        for(;t>1;t/=2)
            counter++;
        cout<<counter<<endl;
        cin>>t;
    }
    return 0;
}

