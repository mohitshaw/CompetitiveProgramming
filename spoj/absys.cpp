#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[11],b[11],c[11];
    int t,A,B,C;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cin>>b>>b;
        cin>>c>>c;
        if(strchr(a,'m')!=NULL)
        {
            B=atoi(b);
            C=atoi(c);
            A=C-B;
        }
        else if(strchr(b,'m')!=NULL)
        {
            A=atoi(a);
            C=atoi(c);
            B=C-A;
        }
        else if (strchr(c,'m')!=NULL)
        {
            A=atoi(a);
            B=atoi(b);
            C=A+B;
        }
        cout<<A<<" + "<<B<<" = "<<C<<endl;
    }
    return 0;
}

