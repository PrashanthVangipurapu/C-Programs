#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
struct node{
	int data;
	node *np;
};
void insert(int pos,int data);
void display();
node *xorll(node *,node *);
node *start;
int main()
{
	start=NULL;
	insert(1,10);
	printf("\n insertion completed");
	insert(2,20);
	printf("\n insertion completed");
	insert(3,30);
	printf("\n insertion completed");
	display();
	insert(4,40);
	printf("\n insertion completed");
	insert(5,50);
	display();
}

void insert(int pos,int data)
{
   node *temp=(node *)malloc(sizeof(node));
	temp->data=data;
	if(start==NULL)
	{
		start=temp;
		temp->np=NULL;
	}
	else
	{
	    {
	    	int i;
	    	node *curr=start;
	    	node *prev=NULL;
		   for(i=0;i<pos-2;i++)
		   {
		   	prev=curr;
		   	curr=curr->np;
		   }
		   if(curr->np==0)
		   {
		   	temp->np=xorll(curr,NULL);
		   	curr->np=xorll(temp,xorll(curr->np,NULL));
		   }
		   else if(curr->np!=0 && pos!=1)
		   {
		   	temp->np=xorll(curr,curr->np);
		   	curr->np=xorll(temp,prev);
		   }
		   else
		   {
		   	temp->np=xorll(curr,prev);
		   	start=temp;
		   }
		}
	}
}
void display()
{
	node *curr=start;
	node *prev=NULL;
	node *next;
	while(curr!=NULL)
	{
		printf("%d-->",curr->data);
		next=xorll(curr->np,prev);
		prev=curr;
		curr=next;
	}
}

node *xorll(node *a, node *b)
{
    return (node*) ((uintptr_t) a ^ (uintptr_t) b);
}
