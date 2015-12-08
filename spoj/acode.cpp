# include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[5000] = {0};
    int len;
    cin>>str;
    while (strcmp(str, "0"))
    {
        len = strlen (str);
        map<int,long long int>DP;
        DP[0] = 1;
        for(int i=1;i<len;i++)
        {
            int temp = 0;
            temp = (str[i-1]-'0') * 10;
            temp += (str[i] -'0');
            if (str[i]-'0')
                DP[i] = DP[i-1];
            if (temp <= 26 && temp > 9)
                DP[i] += DP[i-2 < 0?0:i-2];
        }
        cout<<DP[len-1]<<endl;
        cin>>str;
    }
return 0;
}

