#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int g,m;
    while(t--)
    {
        cin>>g>>m;
        int *god= new int[g];
        int *mecha= new int[m];
        for (int j=0;j<g;j++)
        {
            cin>>god[j];
        }
        for(int j=0;j<m;j++)
        {
            cin>>mecha[j];
        }
        if (*max_element(god,god+g)<*max_element(mecha,mecha+m))
            cout<<"MechaGodzilla"<<endl;
        else
            cout<<"Godzilla"<<endl;
    }
    return 0;
}

