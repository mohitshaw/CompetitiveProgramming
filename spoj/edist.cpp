#include<bits/stdc++.h>
using namespace std;
int dp[2001][2001];
int main()
{
    int t,i,j;
    int x1,x2,x3;
    int len1,len2;
    char str1[2001],str2[2001];
	cin>>t;
	while(t--)
    {
        cin>>str1>>str2;

        len1=strlen(str1);
        len2=strlen(str2);
        for( i=0;i<=len1;i++)
            dp[i][0]=i;
        for( j=1;j<=len2;j++)
            dp[0][j]=j;
        for( i=1;i<=len1;i++)
        {
            for( j=1;j<=len2;j++)
            {
     		x1=((str1[i-1]==str2[j-1])?0:1)+dp[i-1][j-1];
            x2=dp[i][j-1]+1;
		    x3=dp[i-1][j]+1;
			if(x1<x2&&x1<x3)
               dp[i][j]=x1;
            else
            {
                if(x2<x3)
                    dp[i][j]=x2;
         	     else
                    dp[i][j]=x3;
            }
            }
        }
        cout<< dp[len1][len2]<<endl;
	}
	return 0;
}

