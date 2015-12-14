#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int A=105,B=105;
        int counta,countb;
        int n,m;
        cin>>n;
        for (int i=0;i<n;i++)
            cin>>a[i];
        m=strlen(a[0]);
        for (int i=0;i<n;i++)
        {
            counta=0;
            countb=0;
            for (int j=0;j<m;j++)
            {
                if (a[i][j]=='a')
                    counta++;
                else
                    countb++;
            }
            //cout<<counta<<endl;
            //cout<<countb<<endl;
            A=min(A,counta);
            B=min(B,countb);
        }
        cout<<min(A,B)<<endl;
    }
    return 0;
}
