#include<bits/stdc++.h>
using namespace std;
#define lx long long
#define mod 1000000007
void multiply(lx int F[2][2],lx int M[2][2]);
void power(lx int F[2][2], lx int n);
lx int fib(int n)
{
  lx int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}
void power(lx int F[2][2],lx int n)
{
  if( n == 0 || n == 1)
      return;
  lx int M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}
void multiply(lx int F[2][2],lx int M[2][2])
{
  lx int x =  (F[0][0]*M[0][0] + F[0][1]*M[1][0])%mod;
  lx int y =  (F[0][0]*M[0][1] + F[0][1]*M[1][1])%mod;
  lx int z =  (F[1][0]*M[0][0] + F[1][1]*M[1][0])%mod;
  lx int w =  (F[1][0]*M[0][1] + F[1][1]*M[1][1])%mod;
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        printf("%d\n",(fib(m+2)-fib(n+1)+mod)%mod);
    }
    return 0;
}

