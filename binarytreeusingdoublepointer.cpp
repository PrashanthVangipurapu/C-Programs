#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node *left;
	node *right;
};
void insert(node **,int );
void display(node *);
node *root;
int main()
{
		root=NULL;
	insert(&root,30);
	insert(&root,20);
	insert(&root,40);
	insert(&root,15);
	insert(&root,25);
	insert(&root,35);
	insert(&root,47);
	
	display(root);
}

void insert(node **p,int data)
{
	
	if(*p==NULL)
	{
		 printf("\nthe value of *p is %d ",*p);
		 printf("\nthe value of p is %d ",p);
		node *temp=(node *)malloc(sizeof(node));
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
	    *p=temp;
		return ;
	}
	if((*p)->data>data)
	{
		printf("\ninsert left side");//insert leftbside 
	    insert(&(*p)->left,data);
	}
	if((*p)->data<data)
	{
		printf("\ninsert right side");
		insert(&(*p)->right,data);
	}
	
	
}

void display(node *p)
{

	if(p)
	{
		printf("\n%d\n",p->data);
		display(p->left);
		display(p->right);
	
	}
}
