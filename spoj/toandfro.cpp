#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[200], buff[200];
	int col, i, j, temp, len;
	while(1)
	{
		scanf("%d", &col);

		if(col!=0)
		{
			scanf("%s", &string);
			len = strlen(string);
			len/=col;
			temp = (2*col -1);

			for(j=0; j<col; j++)
			{
				for(i=0; i<len; i+=2)
				{
					buff[i] = string[i*col+j];
				}
				for(i=1; i<len; i+=2)
				{
					buff[i] = string[temp + (i-1)*col -j];
				}
				for(i=0; i<len; i++)
				{
					printf("%c",buff[i]);
				}
			}
		}
		else
			break;

		printf("\n");
	}
	return 0;
}
