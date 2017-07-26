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
//void levelorder(node *p);
node* queue[10];
int count=0;
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
	printf("\n");
    node *z= dequeue();
     printf("\nz->data is%d",z->data);
	//levelorder(root);
}

void insert(node **p,int data)
{

	if(*p==NULL)
	{
		 
		node *temp=(node *)malloc(sizeof(node));
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
		printf("\nin insert rear is:%d and front is:%d",rear,front);
		enqueue(temp);
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

/*void levelorder(node *p)
{
	if(p==NULL)
	{
		return;
	}
	else
	enqueue(root);
	
	while(front!=-1 && rear!=-1)
	{
		node *z=dequeue();
		printf("\n%d",z->data);
		if(z->left!=NULL)
		{
			enqueue(root->left);
		}
		if(z->right!=NULL)
		{
			enqueue(root->right);
		}
        if(z->left==NULL && z->right==NULL)
        {
        	printf("\nreached leaf nodes");
			return;
		}
 	}
}*/

void enqueue(node  *p)
{
	printf("\n before enqueue rear is:%d and front is:%d",rear,front);
	//printf("\nenqueue called");
    printf("\nnumber entering the queue is:%d",p->data);
	if(front==-1 && rear==-1)
	{
		printf("\n\nentering the first elt ");
		rear=rear+1;
		front=front+1;
		queue[rear]=p;
	}
	else
	{
		printf("\n\n not first elt");
		rear=rear+1;
		queue[rear]=p;
	}
	printf("\nafter enqueue rear is:%d and front is:%d",rear,front);
}
node* dequeue()
{
	printf("\nfront is:%d",front);
	printf("\n\nentere deqeue");
	node *q=queue[front];
	printf("\n\n deqeue");
	//printf("\n\n%d",queue[front]->data);
	//printf("\nhehehe");
    printf("\n\n\there the data is:%d",q->data);
    printf("\n\nq is %d",q->data);
    node *z=q;
    printf("\n\n\tz is:%d",z->data);
   return q;
	front=front+1;
	//return q;
	

}


