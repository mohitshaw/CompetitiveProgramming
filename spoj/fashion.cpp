#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,k,N;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>N;
        int men[11]={0};
        int women[11]={0};
        for (int i=0;i<N;i++)
        {
            cin>>k;
            men[k]++;
        }
        for (int j=0;j<N;j++)
        {
            cin>>k;
            women[k]++;
        }
        int w=10;
        /*for (int i=0;i<11;i++)
        {
            cout<<"men["<<i<<"]="<<men[i]<<"\twomen["<<i<<"]="<<women[i]<<endl;
        }*/

        for (int m=10;m>0;m--)
        {
            k=men[m];
            while(k!=0)
            {
                if(k<women[w])
                {
                    sum+=k*m*w;
                    women[w]-=k;
                    k=0;
                }
                else
                {
                    if (women[w]!=0)
                        {
                            sum+=women[w]*m*w;
                            k-=women[w];
                        }
                    women[w]=0;
                    w--;
                }
            }
        }
        cout<<sum<<endl;
        /*
        for (int i=0;i<11;i++)
        {
            cout<<"men["<<i<<"]="<<men[i]<<"\twomen["<<i<<"]="<<women[i]<<endl;
        }*/
    }
return 0;
}

