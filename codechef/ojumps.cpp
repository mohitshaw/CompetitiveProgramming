#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    long long a;
    scanf("%lld",&a);
    a=a%6;
    if (a==0||a==1||a==3)
        printf("yes\n");
    else
        printf("no\n");
}
