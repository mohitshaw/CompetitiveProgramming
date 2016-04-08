#include<bits/stdc++.h>
using namespace std;
vector <pair <int , int> > s;
int main()
{
    //freopen("A-large-practice.in","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int c;
        cin>>c;
        int item,x;
        cin>>item;
        s.clear();
        for (int j=1;j<=item;j++)
            {
                cin>>x;
                s.push_back(make_pair(x, c-x));
            }
        for (int j=0;j<item;j++)
        {
            for (int k=j+1;k<item;k++)
            {
                if (s[j].first == s[k].second)
                {
                    cout<<"Case #"<<i<<": "<<j+1<<" "<<k+1<<"\n";
                    break;
                }
            }
        }

    }
    return 0;
}
