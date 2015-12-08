#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,d;
    int attack,defend;
    cin>>a>>d;
    while(a!=0 && d!=0)
    {
        int mina=10000,mind1=10000,mind2=10001;
        for (int i=0;i<a;i++)
        {
            cin>>attack;
            if (attack<mina)
                mina=attack;
        }
        for(int j=0;j<d;j++)
        {
            cin>>defend;
            if (defend<mind2 && defend>=mind1)
            {
                mind2=defend;
            }
            else if (defend<mind1)
            {
                mind2=mind1;
                mind1=defend;
            }
        }
        if (mina<mind2)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
        cin>>a>>d;
    }
    return 0;
}

