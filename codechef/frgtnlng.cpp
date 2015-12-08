#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,l,j;
	scanf("%d",&t);
	char z[101][6],f[2500][6];
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%s",z[i]);
	}
		int m=0;
		for(i=0;i<k;i++)
		{
			cin>>l;
			while(l--)
			{
				scanf("%s",f[m]);
				m++;
			}
		}
		for(i=0;i<n;i++)
		{
		int h=0;
		for(j=0;j<m;j++)
		{
			if(strcmp(z[i],f[j])==0)
			{
				printf("YES ");
				h=1;
				break;
			}
		}
		if(h==0)
		printf("NO ");
		}
		printf("\n");
	}
	return 0;
}
