#include<stdio.h>
int a[100001]={0};
int main()
{
	int t,i,n,v;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int c=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&v);
			a[v]=1;
		}
		for(i=0;i<=100000;i++)
		{
		if(a[i]==1)
		++c;
		a[i]=0;
		}
		printf("%d\n",c);
	}
	return 0;
}
