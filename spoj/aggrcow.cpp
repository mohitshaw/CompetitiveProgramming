#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int arr[100001];
int c,n;
int f(int x);
int search_binary();
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
        {
		scanf("%d %d",&n,&c);
		for(int i=0;i<n;i++)
		  scanf("%d",&arr[i]);
          sort(arr,arr+n);
		printf("%d\n",search_binary());
        }
    return 0;
 }
 int search_binary()
 {
	 int start=0,stop=arr[n-1];
        while(stop>start)
        {
		int mid=(start+stop)/2;
		if(f(mid))
		    start=mid+1;
		else
		    stop=mid;
		}
		return start-1;
}
int f(int x)
{
	int cows_placed=1;
    int last_pos=arr[0];
	for(int i=1;i<n;i++)
        if(arr[i]-last_pos>=x)
		{
            if(++cows_placed==c)
			  return 1;
            last_pos=arr[i];
        }
    return 0;
  }

