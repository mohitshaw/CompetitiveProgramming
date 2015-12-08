#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,k;
    char pattern[40];
    cin>>t;
    while(t--)
    {

        cin>>k;
        cin>>pattern;
        int ht[8]={0};
        for(i=0;i<38;i++)
        {
            if (pattern[i]=='T')
            {
                if (pattern[i+1]=='T')
                {
                    if (pattern[i+2]=='T')
                        ht[0]++;
                    else
                        ht[1]++;
                }
                else
                {
                    if (pattern[i+2]=='T')
                        ht[2]++;
                    else
                        ht[3]++;
                }
            }
            else
            {
                if (pattern[i+1]=='T')
                {
                    if (pattern[i+2]=='T')
                        ht[4]++;
                    else
                        ht[5]++;
                }
                else
                {
                    if (pattern[i+2]=='T')
                        ht[6]++;
                    else
                        ht[7]++;
                }
            }
        }
        cout<<k;
        for (int j=0;j<8;j++)
        {
            cout<<" "<<ht[j];
        }
        cout<<endl;
    }
    return 0;
}

