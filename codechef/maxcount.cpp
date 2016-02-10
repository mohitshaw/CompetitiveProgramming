#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int a[10001]={0};
        for (int i=1;i<=n;i++)
        {
            cin>>x;
            a[x]++;
        }
        int min_index = 0;
        int max_count = a[0];
        for (int i=1;i<=10000;i++)
        {
            if (a[i]>max_count)
                max_count = a[i], min_index = i;
        }
        cout<<min_index<<" "<<max_count<<endl;
    }
    return 0;
}
