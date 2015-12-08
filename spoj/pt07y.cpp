#include<bits/stdc++.h>
using namespace std;
struct node
{
	int value;
	struct node *next;
};
struct node *nnode[10000],*pre;
int *visited,val=0;
int v,e,x,y,i;
void make_link(struct node *nnode[],int x,int y)
{
	struct node *pre;
	struct node *temp;
	pre = nnode[x];
	while(pre->next!=NULL)
		pre=pre->next;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->value=y;
	temp->next=NULL;
	pre->next=temp;
}
void DFS(int y,int choice)
{
	struct node *pre;
	visited[y]=1;
	pre=nnode[y]->next;
	while(pre!=NULL)
	{
		if(visited[pre->value]==0)
			DFS(pre->value,choice);
		pre=pre->next;
	}
}
int main()
{

	cin>>v>>e;
	visited=(int *)malloc(sizeof(int)*v);
	for(i=0;i<v;i++)
	{
		visited[i]=0;
		nnode[i]=(struct node *)malloc(sizeof(struct node));
		nnode[i]->value=i;
		nnode[i]->next=NULL;
	}
	for(i=0;i<e;i++)
	{
        cin>>x>>y;
		x--;
		y--;
		make_link(nnode,x,y);
		make_link(nnode,y,x);
	}
	for(i=0;i<v;i++)
	{
		if(visited[i]==0)
		{
			val++;
			DFS(i,0);
		}
	}
	if(val>1||e>=v)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}


