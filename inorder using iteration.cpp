#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node *right;
	node *left;
};
void push(node *);
node *pop();
int tos=-1;
node *stack[30];
void inorder(node *);
void insert(node **,int data);
void display(node *);
node *root;
int main()
{
	root=NULL;
	printf("entered main\n");
	insert(&root,50);
	printf("50 inserted\n");
	insert(&root,30);
	printf("30 inserted\n");
	insert(&root,70);
	printf("70 inserted\n");
	insert(&root,15);
	printf("15 inserted\n");
	insert(&root,35);
	printf("35 inserted\n");
	insert(&root,65);
	printf("65 inserted\n");
	insert(&root,75);
	printf("75 inserted\n");
	printf("\n");
	display(root);
	printf("\n");
	printf("inorder presentation\n");
	inorder(root);
	printf("\ncomplete");
}

void insert(node **p,int data)
{
	if(*p==NULL)
	{
		printf("\nfirst node\n");
		node *temp=(node *)malloc(sizeof(node));
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
		*p=temp;
		return;
	}
	else
	{
	printf("\nnot a first node");
	if((*p)->data>data)
	{
		printf("\ninsert left side %d",(*p)->data);
		insert(&(*p)->left,data);
	}
    if((*p)->data<data)
    {
    	printf("\ninsert right side %d",(*p)->data);
    	insert(&(*p)->right,data);
	}
  }
}
void display(node *p)
{
	if(p)
	{
	
	printf("\n\n%d",p->data);
	display(p->left);
	display(p->right);
   }
}

void inorder(node *p)
{
	while(1)
	{
		while(p)
		{
			push(p);
			p=p->left;
	   }
	   
	   if(tos==-1)
	     break;
	     
	   p=pop();
	   printf("\n%d",p->data);
	   p=p->right;  
		}
}
void push(node *p)
{
	tos=tos+1;
	stack[tos]=p;
}
node *pop()
{
	if(tos!=-1)
	{
		node *p=stack[tos];
		tos=tos-1;
		return p;
	}
}

