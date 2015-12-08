#include<stdio.h>
int main()
{   int a1,a2,a3;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&a3);
    while(a1||a2||a3)
    {

        if ((2*a2)==(a1+a3))
                    {printf("AP %d\n",((2*a3)-a2));
                    }
        else
                    printf("GP %d\n",(a3*(a3/a2)));

    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&a3);
    }
    return 0;
}

