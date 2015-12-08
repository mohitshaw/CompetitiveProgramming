#include<iostream>
#include<algorithm>

using namespace std;
int a[1001];

int main()
{
	int t;
	cin>>t;
	while(t--)
        {
            int n;
            cin>>n;
            for (int i=1;i<=n;++i)
                cin>>a[i];
            sort(a+1,a+n+1);
            int ans=0;
            for (int i=1;i<=n;++i)
                ans+=a[i]-a[1];
            cout<<ans<<endl;
        }
}
