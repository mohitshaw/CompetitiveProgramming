#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x , y,ans;
        cin>>x>>y;
        int stone[x][y];
        //taking matrix value
        for(int i = 0 ; i < x ; i++)
            for(int j = 0 ; j < y ; j++)
                cin>>stone[i][j];
        //calculating matrix result
        if (x>1 && y>1)
        {
        for(int i = 1 ; i < x ; i++)
        {
            ans = -1;
            for(int j = 0 ; j < y ; j++)
            {
                if(j>0 && j<y-1)
                    stone[i][j] += max(stone[i-1][j],max(stone[i-1][j-1], stone[i-1][j+1]));
                else if(j>0)
                    stone[i][j] += max(stone[i-1][j],stone[i-1][j-1]);
                else if(j<y-1)
                    stone[i][j] += max(stone[i-1][j],stone[i-1][j+1]);
                ans = max(stone[i][j] , ans);
            }
        }
        cout<<ans<<endl;
        }
        if (x==1)
        {
            ans=-1;
             for(int j = 0 ; j < y ; j++)
             {
                 ans=max(ans,stone[0][j]);
             }
             cout<<ans<<endl;
        }
        if (y==1)
        {
            ans=0;
             for(int i = 0 ; i < x; i++)
             {
                 ans+=stone[i][0];
             }
             cout<<ans<<endl;
        }
    }
    return 0;
}

