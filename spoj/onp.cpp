#include <stdio.h>
main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        char str[400],stack[400];
        int top=0,i;
        scanf("%s", str);

        for(i=0;str[i]!='\0';i++)
        {
        	if(str[i] == '(')
        		continue;
        	else if(str[i]== ')')
        	{
        		printf("%c",stack[top]);
        		top--;
        	}
        	else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' || str[i]=='^')
        	{
        		top++;
        		stack[top]=str[i];
        	}
        	else
        		printf("%c",str[i]);
        }
        printf("\n");
	}
	return 0;
}

