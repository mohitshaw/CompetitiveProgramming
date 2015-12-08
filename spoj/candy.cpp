#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int packet,k;
    int quantity[10000];
    cin>>packet;
    while(packet!=-1)
    {
        int total=0;
        int track=0;
        for(int i=0;i<packet;i++)
        {
            cin>>quantity[i];
            total+=quantity[i];
        }
        if (total%packet==0)
        {
            int avg=total/packet;
            int track=0;
            for (int j=0;j<packet;j++)
            {
                if (quantity[j]<avg)
                {
                    k=quantity[j];
                    while(k!=avg)
                    {
                        k++;
                        track++;
                    }
                }
            }
            cout<<track<<endl;
        }
        else
            cout<<"-1"<<endl;
        cin>>packet;
    }

return 0;
}

