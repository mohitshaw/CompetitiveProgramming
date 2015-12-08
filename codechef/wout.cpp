#include<bits/stdc++.h>
using namespace std;
#define s 1000010
int n[s];
int la[s];
int ra[s];

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,h,i;
        cin>>x>>h;
        memset(n,0,s);
        memset(la,0,s);
        memset(ra,0,s);
        int l,r;
        long long int maxv=0,ans=0;
        for(i=0;i<x;i++)
        {
            cin>>l>>r;
            la[l]++;
            ra[r]++;
        }
        n[0]=la[0];
        for(i=1;i<x;i++)
			n[i]=n[i-1]+la[i]-ra[i-1];
        for(i=0;i<h;i++)
			ans+=n[i];
		maxv=ans;
        for(i=h;i<x;i++)
		{
			ans=ans-n[i-h]+n[i];
			maxv=max(maxv,ans);
		}
        maxv=(x*h)-maxv;
        cout<<maxv<<endl;
    }
    return 0;
}
