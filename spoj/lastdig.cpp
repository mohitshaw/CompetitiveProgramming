#include <stdio.h>

int main(void)
{
    int T, buff[5], i;
    unsigned long int a, b, temp, val;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%lu %lu", &a, &b);
        temp=1;
        for(i=1; i<6; i++)
        {
            if(b==0)
            {
                buff[0]=1;
                break;
            }
            temp = (temp*a)%10;
            buff[i%4] = temp%10;
        }
        val = b%4;
        printf("%d\n", buff[val]);
    }
    return 0;
}

