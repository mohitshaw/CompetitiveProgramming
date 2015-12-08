#include<stdio.h>
int main()
{int a;
float b;
scanf("%d%f",&a,&b);
if (a%5==0 && b>(a+0.5))
printf("%.2f",b-0.5-a);
else
printf("%.2f",b);
return 0;
}
