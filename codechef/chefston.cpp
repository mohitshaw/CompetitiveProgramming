#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int i,n,k;
        vector<long long int> A;
        long long int maxv;
        long long int x,l;
        cin>>n>>k;
        for (i=0;i<n;i++)
            {cin>>x;
             A.push_back(x);
            }
        for (i=0;i<n;i++)
            {
            l=k/A[i];
            cin>>A[i];
            A[i]=A[i]*l;
            }
            maxv=*max_element(A.begin(),A.end());
            cout<<maxv<<endl;
    }
    return 0;
}
