#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i;
    long long int ans;
    long long int n[1000000];
    scanf("%lld",&t);
    while(t--)
    {
        long long int k,k_org,temp,no;
        ans=1;
        scanf("%lld",&no);
        cin>>k_org;
        for (i=0;i<no;i++)
            scanf("%lld",&n[i]);
        k=k_org;
        i=0;
        while(i<no)
        {
            if(k>=n[i])
                {
                    k=k-n[i];
                    i++;
                    if(k==0)
                    {
                        k=k_org;
                        ans++;
                        //cout<<"beep\n";
                    }
                    else
                        k--;
                }
            else if(k<n[i])
            {
                n[i]=n[i]-k;
                temp= n[i]/k_org;
                if(n[i]%k_org==0)
                {
                    ans=ans+temp+1;
                    k=k_org;
                }
                else
                {
                    ans=ans+temp+1;
                    k=k_org-n[i]%k_org;
                    k--;
                }
                 i++;
            }
        }
        if (k==k_org)
            ans--;
        cout<<ans<<endl;
    }
    return 0;
}
