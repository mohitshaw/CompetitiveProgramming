#include<bits/stdc++.h>
using namespace std;
#define lx long long
bool check[1000006];
vector <int> prime;
void precalc()
{
    for (int i=3;i<=1000;i+=2)
    {
        if (!check[i])
        {
            for (int j = i*i; j<=100000; j+=i)
                check[j] = 1;
        }
    }
    prime.push_back(2);
    for (int i=3;i<=10000;i+=2)
    {
        if (!check[i])
            prime.push_back(i);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    precalc();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        lx gc = __gcd(a,b);
        lx result = 1;
        if (gc == 1)
        {
            printf("1\n");
            continue;
        }
        for(int i = 0 ;i <= 1000 && prime[i] < gc  && gc; i++)
        {
            int cnt = 0;
            while(gc%prime[i] == 0)
            {
                cnt++;
                gc/=prime[i];
            }
            result *= (cnt + 1);
        }
        if(gc > 1)
            result *= 2;
        printf("%lld\n",result);
    }
    return 0;
}

