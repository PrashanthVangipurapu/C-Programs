#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node *left;
	node *right;
};
//int recursemax(node *);
void insert(node **,int );
void display(node *);
node *root;
int search(node *p,int );
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
	printf("\nsearching output is %d",search(root,35));
	//printf("\nrecurse max being called");
//	printf("maximum element is %d",recursemax(root));
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
int count=0;
int search(node *p,int elt)
{
	count++;
	if(p->data==elt)
	{
	  printf("\np->data is %d",p->data);
      return count;
    }
	 
	 
	 	if(p->left!=NULL)
	 	 search(p->left,elt);
	 	 if(p->right!=NULL)
	 	  search(p->right,elt);
		 
	 
	 printf("\nno elt found");
	 //return 0;
}
