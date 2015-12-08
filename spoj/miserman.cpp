#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
        int x , y,ans;
        cin>>x>>y;
        int bus[x][y];
        //taking matrix value
        for(int i = 0 ; i < x ; i++)
            for(int j = 0 ; j < y ; j++)
                cin>>bus[i][j];
        //calculating matrix result
        if (x>1 && y>1)
        {
        for(int i = 1 ; i < x ; i++)
        {
            ans = 10010;
            for(int j = 0 ; j < y ; j++)
            {
                if(j>0 && j<y-1)
                    bus[i][j] += min(bus[i-1][j],min(bus[i-1][j-1], bus[i-1][j+1]));
                else if(j==y-1)
                    bus[i][j] += min(bus[i-1][j],bus[i-1][j-1]);
                else if(j==0)
                    bus[i][j] += min(bus[i-1][j],bus[i-1][j+1]);
                ans = min(bus[i][j] , ans);
            }
        }
        cout<<ans<<endl;
        }
        if (x==1)
        {
            ans=10010;
             for(int j = 0 ; j < y ; j++)
             {
                 ans=min(ans,bus[0][j]);
             }
             cout<<ans<<endl;
        }
        if (y==1)
        {
            ans=0;
             for(int i = 0 ; i < x; i++)
             {
                 ans+=bus[i][0];
             }
             cout<<ans<<endl;
        }
    return 0;
}

