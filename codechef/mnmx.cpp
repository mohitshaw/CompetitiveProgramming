#include<bits/stdc++.h>
using namespace std;
int a[50000];
int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,temp;
        long long int sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        /*temp=a[0];
        for (int i=1;i<n;i++)
        {

            if (temp>a[i])
            {
                temp=a[i];
                sum+=a[i];
            }
            else
                sum+=temp;
        }
        cout<<sum<<endl;*/
        temp=*min_element(a,a+n);
        cout<<temp*(n-1)<<endl;
    }
    return 0;
}
