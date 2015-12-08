#include<stdio.h>
int main()
{
    int N,x,y;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d%d",&y,&x);
        if (x%2==0)
        {
            if(x==y || x==y-2)
                printf("%d\n",x+y);
            else
                printf("No Number\n");
        }
        else
        {
            if (x==y || x==y-2)
                printf("%d\n",x+y-1);
            else
                printf("No Number\n");
        }
    }
    return 0;
}

