#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;  // limit for array size
int n;  // array size
int t[2 * N];
int value[100000];
void build() {  // build the tree
  for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
}

void modify(int l, int r, int value) {
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) t[l++] += value;
    if (r&1) t[--r] += value;
  }
}

int query(int p) {
  int res = 0;
  for (p += n; p > 0; p >>= 1) res += t[p];
  return res;
}

int main() {
  scanf("%d", &n);
  build();
  int x;
  cin>>x;
  for (int i=0;i<x;i++)
  {
      int a,b;
      cin>>a>>b;
      modify(a-1, b,1);
  }

  for (int i=0;i<n;i++)
    value[i]=query(i);
sort(value,value+n);
//for (int i=0;i<n;i++)
    //cout<<value[i]<<" ";
    cout<<value[n/2];
  return 0;
}
