#include<bits/stdc++.h>
using namespace std;
#define lx long long
int main()
{
    ios::sync_with_stdio(0);
    //freopen("input.txt","r",stdin);
    int alen,blen,abase,bbase;
    cin>>alen>>abase;
    vector<int> a(alen);
    for (int i=alen-1;i>=0;i--)
        cin>>a[i];
    cin>>blen>>bbase;
    vector<int> b(blen);
    for (int i=blen-1;i>=0;i--)
        cin>>b[i];
    lx int ans1=0,ans2=0;
    vector<lx int> apow(alen),bpow(blen);
    apow[0]=1;
    bpow[0]=1;
    ans1=a[0]*apow[0];
    ans2=b[0]*bpow[0];
    for (int i=1;i<alen;i++)
    {
        apow[i]=apow[i-1]*abase;
        ans1+=a[i]*apow[i];
    }
    for (int i=1;i<blen;i++)
    {
        bpow[i]=bpow[i-1]*bbase;
        ans2+=b[i]*bpow[i];
    }
    //cout<<ans1<<" "<<ans2<<endl;
    if (ans1==ans2)
        cout<<"=";
    else if (ans1>ans2)
        cout<<">";
    else
        cout<<"<";
    return 0;
}
