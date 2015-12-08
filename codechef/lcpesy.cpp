#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[10005];
        int charSet1[123];
        int charSet2[123];
        int count = 0;

	for (int i = 0; i < 123; i++)
        {
			charSet1[i] = 0;
			charSet2[i] = 0;
		}

    scanf("%s",str);
	for (int i = 0; str[i] != '\0'; i++)
        {
            charSet1[(int)str[i]]++;
		}
	scanf("%s",str);
	for (int i = 0; str[i] != '\0'; i++)
        {
            charSet2[(int)str[i]]++;
		}

    for (int i = 0; i < 123; ++i)
    {

        count += min(charSet1[i], charSet2[i]);
    }
    printf("%d\n",count);
    }
    return 0;
}
