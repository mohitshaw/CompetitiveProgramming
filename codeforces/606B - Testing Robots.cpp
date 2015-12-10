#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int x,y,xpos,ypos;
    cin>>x>>y>>xpos>>ypos;
    string s;
    cin>>s;
    vector<vector <bool> > visited(x+1,vector <bool> (y+1));
    int counter = 0;
    int loop = s.size();
    for (int i=0;i<loop;i++)
    {
        if (!visited[xpos][ypos])
        {
            counter++;
            visited[xpos][ypos]=1;
            cout<<"1 ";
        }
        else
            cout<<"0 ";
        if(s[i]=='U')
            xpos--;
        else if (s[i]=='D')
            xpos++;
        else if (s[i]=='L')
            ypos--;
        else
            ypos++;
        xpos=min(max(1,xpos),x);
        ypos=min(max(1,ypos),y);
    }
    cout<<x*y-counter<<endl;
    return 0;
}
