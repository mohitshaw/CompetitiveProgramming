#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    set<int> myset;
    set<int>::iterator it;
    pair<set<int>::iterator,bool> w;
    w=myset.insert(0);
    //if(w.second)
          it=w.first;
    for(int i=0;i<n;i++)
    {
          int x;
           cin>>x;
           myset.insert(it,x);
           int num;
           cin>>num;
           for(int j=0;j<num;j++)
           {
                int y;
                cin>>y;
                myset.insert(it,y);
           }
    }
    cout<<myset.size()-(n+1)<<endl;
    return 0;
}

