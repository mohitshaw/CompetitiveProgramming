#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum,val;
    int t,req,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>req;
        cin>>n;
        int *arr=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);
        sum=0;
        val=0;
        for(int j=n-1;j>=0;j--)
        {
            sum+=arr[j];
            val++;
            if(sum>=req)
            {
                cout<<"Scenario #"<<i+1<<":"<<endl<<val<<endl;
                break;
            }
        }
        if(sum<req)
        cout<<"Scenario #"<<i+1<<":"<<endl<<"impossible"<<endl;
    }
return 0;
}

