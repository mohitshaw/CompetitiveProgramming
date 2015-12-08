#include<bits/stdc++.h>
using namespace std;
#define m_val 1100000000000000000
int main()
{
    long long int t,n,i;
    long long int a[200];
    a[0]=0;
    a[1]=0;
    for(i=2;a[i-1]<m_val;i++)
    {
        a[i]=a[i-1]+a[i-2]+1;
    }
    //int a[200]={0, 1, 2, 4, 7, 12, 20, 33, 54, 88, 143, 232, 376, 609, 986, 1596, 2583, 4180, 6764, 10945, 17710, 28656, 46367, 75024, 121392, 196417, 317810, 514228, 832039, 1346268, 2178308, 3524577, 5702886, 9227464, 14930351, 24157816, 39088168};
    cin>>t;
    while(t--)
    {
        cin>>n;
        for (i=0;;i++)
        {
            if (n==a[i])
                break;
            else if (n<a[i] && n>a[i-1])
                break;
        }
        cout<<i-1<<endl;
    }
    return 0;
}
