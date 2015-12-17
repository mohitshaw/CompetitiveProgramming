#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    vector <int> x(n),y(n);
    for (int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    if (n==1)
        cout<<-1<<endl;
    else
    {
        int area = 0;
        for (int i=0;i<n;i++)
            for (int j=i+1;j<n;j++)
            {
                if (x[i]!=x[j] && y[i]!=y[j])
                    area = abs(x[i]-x[j])*abs(y[i]-y[j]);
            }
        if (area == 0)
            cout<<-1<<endl;
        else
            cout<<area<<endl;
    }
    return 0;
}
