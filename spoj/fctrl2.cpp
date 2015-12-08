#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int i,k=0,j,temp=0,arr[200]={1};
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=k;j++)
             {
                arr[j]=arr[j]*i+temp;
                temp=arr[j]/10;
                arr[j]=arr[j]%10;
             }
             while(temp)
             {
                 k++;
                 arr[k]=temp%10;
                 temp/=10;
             }
         }
         for(i=k;i>=0;i--)
            printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}
