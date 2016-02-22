#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1001];
    while(scanf("%s",a)!=EOF)
    {
        int len=strlen(a);
        int arr1[len];
        int arr2[len];
        int arr3[len];
        int ans1=0;
        int ans2=0;
        if(len==1)
            cout<<0<<endl;
        else
        {
            for(int i=0;i<len;i++)
            {
                if(a[i]>='A'&&a[i]<='Z')
                    arr1[i]=1;
                else
                    arr1[i]=0;
            }
            arr2[0]=1;
            arr3[0]=0;
            for(int i=1;i<len;i++)
            {
                if(arr2[i-1]==0)
                {
                    arr2[i]=1;
                    arr3[i]=0;
                }
                else{
                    arr2[i]=0;
                    arr3[i]=1;
                }
            }
            for(int i=0;i<len;i++)
            {
                if(arr1[i]!=arr2[i])
                    ans1++;
                if(arr1[i]!=arr3[i])
                    ans2++;
            }
            cout<<min(ans1,ans2)<<endl;
        }
    }
    return 0;
}
