#include <bits/stdc++.h>
using namespace std;
lx int a[100005], n, x, l;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
    {
		cin>>x;
		a[x]=1+a[x-1];
		if(a[x] > l)
            l = a[x];
	}
	cout<<n-l;
	return 0;
}
