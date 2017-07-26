#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node *left;
	node *right;
};
node *root;
void insert(node**,int);
void display(node *);
int main()
{
	root=NULL;
	insert(&root,10);
	insert(&root,20);
	insert(&root,5);
	insert(&root,15);
	insert(&root,24);
	
	display(root);
}
void insert(node **p,int d)
{
	if(*p==NULL)
	{
		node *temp=(node *)malloc(sizeof(node));
		temp->data=d;
		temp->left=NULL;
		temp->right=NULL;
		*p=temp;
		return;
	}
	
	
		if((*p)->data>d)
		{
			printf("\ninsert left side");
			insert(&(*p)->left,d);
		}
		else if((*p)->data<d)
		{
			printf("\ninsert right side");
			insert(&(*p)->right,d);
		}
	
}

void display(node *p)
{
	if(p)
	{
		printf("\n%d",p->data);
		display(p->left);
		display(p->right);
	}
}
