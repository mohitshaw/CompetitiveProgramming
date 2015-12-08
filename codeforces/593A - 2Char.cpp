#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    //freopen("inpt.txt","r",stdin);
    int t;
    int a[26][26] = {0};
    int b[26] = {0};
    int max1= -1;
    char c;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        sort(s.begin(),s.end());
        //cout<<s<<endl;
        int slen = s.length();
        c = s[0];
        int cnt = 1;
        for (int i=1;i<slen;i++)
        {
            if (c != s[i])
            {
                c = s[i];
                cnt++;
            }
        }
        if (cnt == 2)
            a[s[0]-'a'][c - 'a'] += slen ;
        else if (cnt == 1)
        {
                b[c-'a'] += slen;
        }
    }
    for (int i=0;i<26;i++)
    {
        for (int j=0;j<26;j++)
        {
            a[i][j] += b[i];
            if (i != j)
            a[j][i] += b[i];
        }
    }
    for (int i=0;i<26;i++)
    {
        for (int j=0;j<26;j++)
        {
            if (a[i][j]>= max1)
                max1 = a[i][j];
        }
    }
    cout<<max1<<endl;
    return 0;
}
