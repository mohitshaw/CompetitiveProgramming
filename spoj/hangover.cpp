#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    float t;
    cin>>t;
    while(t)
    {
        float sum=0;
        i=0;
        while(sum<t)
        {
             sum+=1.0/(2.0+i);
             i++;
        }
        cout<<i<<" card(s)\n";
        cin>>t;
    }

    return 0;
}

