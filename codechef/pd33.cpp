#include<stdio.h>
#include<cstring>
int main()
{
int N,j,i;
char str[200];
scanf("%d",&N);
while (N!=0)
{	scanf("%s",str);
	for (i=0;i<N;i++)
	{for (j=0;str[j]!='\0';j=j+2*N)
		{
			printf("%c%c",str[j+i],str[j+2*N-i-1]);
		}
	}
	printf("\n");
	scanf("%d",&N);
}
return 0;
}
