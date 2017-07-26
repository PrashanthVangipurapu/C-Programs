#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node *left;
	node *right;
};
void enqueue(node *);
node* dequeue();
void insert(node **,int );
void display(node *);
node *root;
int front=-1,rear=-1;
void levelorder(node *p);
int n;
node* queue[10];
int count=0;
int main()
{
	root=NULL;
	printf("\nenter the number of noes in your tree");
	scanf("%d",&n);
	insert(&root,30);
	insert(&root,20);
	insert(&root,40);
	insert(&root,15);
	insert(&root,25);
	insert(&root,35);
	insert(&root,47);
	display(root);
	printf("\ndisplay completed");
	printf("\n");
	levelorder(root);
}

void insert(node **p,int data)
{

	if(*p==NULL)
	{
		 //printf("\nthe value of *p is %d ",*p);
		 //printf("\nthe value of p is %d ",p);
		node *temp=(node *)malloc(sizeof(node));
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
	    *p=temp;
		return ;
	}
	if((*p)->data>data)
	{
		//printf("\ninsert left side");//insert leftbside 
	    insert(&(*p)->left,data);
	}
	if((*p)->data<data)
	{
		//printf("\ninsert right side");
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

void levelorder(node *p)
{
	node *z;
	//printf("\nentered into levelorder");
	if(p==NULL)
	{
		//printf("\nno tree exists");
		return;
	}
	else
	{
      //printf("\nenqueueing elements");		 
      //printf("\nroot is:%d",root->data);
	  enqueue(root);
    }
    //printf("\n\t n is %d",n);
	while(front<=n-1)
	{
	    //printf("\ndequeue called");
		z=dequeue();
		//printf("\ndequeue call is over and z-data is:%d",z->data);
		printf("\n%d",z->data);
		if(z->left!=NULL)
		{
			//printf("\nyes left exists");
			enqueue(z->left);
			//printf("\nroot-left is %d",z->left->data);
		}
		if(z->right!=NULL)
		{
			//printf("\nyes right exists");
			enqueue(z->right);
			//printf("\nroot-right is %d",z->right->data);
		}
    }
    if(z->left==NULL && z->right==NULL)
        {
        	printf("\nreached leaf nodes");
			return;
		}
}

void enqueue(node  *p)
{
	if(front==-1 && rear==-1)
	{
	  //printf("\nentering the first element");
	  	rear=rear+1;
		front=front+1;
		queue[rear]=p;
	}
	else
	{
		//printf("\nother than the first element");
		rear=rear+1;
		queue[rear]=p;
	}
}
node* dequeue()
{
	//printf("\nfront is %d",front);
	node *q=queue[front];
	//printf("\nfront of queue is:%d",queue[front]->data);
	front=front+1;
	return q;
}
