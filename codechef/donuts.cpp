#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int x,t;
    cin>>t;
    while(t--)
    {
        long long int sum;
        int n;
        cin>>sum>>n;
        int A[n];
        long long int x=n-1;
        for (int i=0;i<n;i++)
            cin>>A[i];
        sort(A,A+n);
        //for(int i=0;i<n;i++)
            //cout<<A[i]<<endl;
        if (A[n-1]==1)
            cout<<sum/2<<endl;
        else
        {
            sum=0;
            for (int i=0;i<n;i++)
            {
                if (A[i]>=x)
                    break;
                else
                {
                    sum+=A[i];
                    x=x-1-A[i];
                    //cout<<x<<endl;
                }
            }
        cout<<sum+x<<endl;
        }
    }
    return 0;
}
