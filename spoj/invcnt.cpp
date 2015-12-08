#include<bits/stdc++.h>
using namespace std;
long long int Mergesort(long long int A[],long long int temp[],long long int left,long long int right);
long long int Merge(long long int A[],long long int temp[],long long int left,long long int mid,long long int right);
int main()
{
    long long int t;
    long long int ans;
    cin>>t;
    while(t--)
    {
        long long int A[200000];
        long long int i,n;
        cin>>n;
        long long int *temp= new long long int[n];
        for(i=0;i<n;i++)
            cin>>A[i];
        ans=Mergesort(A,temp,0,n-1);
        cout<<ans<<endl;
    }
    return 0;
}
long long int Mergesort(long long int A[],long long int temp[],long long int left,long long int right)
{
    long long int mid;
    long long int invcount=0;
    if (right>left)
    {
        mid=(right+left)/2;
        invcount = Mergesort(A,temp,left,mid);
        invcount += Mergesort(A,temp,mid+1,right);
        invcount += Merge(A,temp,left,mid+1,right);
    }
    return invcount;
}
long long int Merge(long long int arr[], long long int temp[], long long int left, long long int mid, long long int right)
{
  long long int i, j, k;
  long long int invcount = 0;

  i = left;
  j = mid;
  k = left;
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
      invcount = invcount + (mid - i);
    }
  }
  while (i <= mid - 1)
    temp[k++] = arr[i++];
  while (j <= right)
    temp[k++] = arr[j++];
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
  return invcount;
}


