#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    cin>>t;
    while(t!=0)
        {
            int *order= new int [t];
            stack<int> lane;
            int need = 1;
            bool state = true;
            for (int i = 0; i < t; i++)
            {
                cin>>x;
                order[i]=x;
            }
            for (int i = 0; i < t; i++)
            {
                while (!lane.empty() && lane.top() == need)
                {
                    need++;
                    lane.pop();
                }
                if (order[i] == need)
                    need++;
                else if (!lane.empty() && lane.top() < order[i])
                {
                    state = false;
                    break;
                }
                else
                {
                    lane.push(order[i]);
                }
            }
        if (state)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
            cin>>t;
    }
        return 0;
}

