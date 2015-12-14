#include<bits/stdc++.h>
using namespace std;
#define lx long long
lx int t,n,high,sz,i;
double a,b,c,x;

int main()
{
    ios_base::sync_with_stdio(0);
    vector< pair<double,double> > v;
    set<double> s;
	cin>>t;
	while(t--)
	{
		v.clear();
		s.clear();
		cin>>n;
		while(n--)
		{
			cin>>a>>b>>c;
			if(b!=0)
                v.push_back(make_pair((double)a/b,(double)c/b));
   			else
                v.push_back(make_pair(1000000001,(double)c/a));
		}
		sort(v.begin(),v.end());
		x=v[0].first;
		high=1;
		for(i=0;i<v.size();i++)
		{
			if(v[i].first==x)
			{
				s.insert(v[i].second);
			}
			else
                {
                    x=v[i].first;
                    sz=s.size();
                    high=max(high,sz);
                    //cout<<s.size()<<" ";
                    s.clear();
                    s.insert(v[i].second);
                }
		}
		sz=s.size();
		high=max(high,sz);
		cout<<high<<endl;
	}
 	return 0;
}
