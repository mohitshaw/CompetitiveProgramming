#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    int e;
    cin>>e;
    while(e!=-1)
    {
    int f,s,m,E,F,S,M,e1,f1,s1,m1,mval;
    cin>>f>>s>>m>>E>>F>>S>>M;
    e1=e/E;
    f1=f/F;
    s1=s/S;
    m1=m/M;
    if (e%E)
        e1++;
    if (f%F)
        f1++;
    if (s%S)
        s1++;
    if (m%M)
        m1++;
    mval=max(max(max(e1,f1),s1),m1);
    //cout<<mval<<endl;
    cout<<(mval*E)-e<<" "<<(mval*F)-f<<" "<<(mval*S)-s<<" "<<(mval*M)-m<<endl;
    cin>>e;
    }
    return 0;
}

