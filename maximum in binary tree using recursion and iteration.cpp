// C program to find maximum and minimum in a Bianry Tree
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// A tree node
struct node
{
	int data;
	struct node* left, *right;
};

// A utility function to create a new node
struct node* newNode(int data)
{
	struct node* node = (struct node*) malloc(sizeof(struct node));
	node->data = data;
	node->left = node->right = NULL;
	return(node);
}
int count=0;
// Returns maximum value in a given Binary Tree
int findMax(struct node* root)
{
	
	// Base case
	if (root == NULL)
	{
		printf("\nroot null is called");
	  return INT_MIN;
    }
	// Return maximum of 3 values:
	// 1) Root's data 2) Max in Left Subtree
	// 3) Max in right subtree
	int res = root->data;
    printf("\nroot is %d",res);
	int lres = findMax(root->left);
	printf("\nleft is %d",lres);
	int rres = findMax(root->right);
	printf("\nright is %d",rres);

	
	printf("\nroot is %d \t left is %d \t right is %d",res,lres,rres);
	if (lres > res)
	res = lres;
	if (rres > res)
	res = rres;
	printf("\nresult is:%d\n\n\n",res);
	return res;
}
node *que[20];
int front=-1,rear=-1;
void enqueue(node *p)
{
	if(front==-1 && rear==-1)
	{
		front=front+1;
		rear=rear+1;
		que[rear]=p;
	}
	else
	{
		rear=rear+1;
		que[rear]=p;
	}
}
node *dequeue()
{
	node *p=que[front];
	front=front+1;
	return p;
}

int maxusingiteration(node *p)
{
	int max=INT_MIN;
	enqueue(p);
	
	while(front<=7)
    {
     printf("\nfront is %d and rear is %d",front,rear);	
    	printf("\n entered while");
    	p=dequeue();
    	printf("\np is %d",p->data);
    	if(p->data>max)
    	{
    		max=p->data;
		}
		if(p->left!=NULL)
		{
		   printf("\np->left is not null");
			enqueue(p->left);
		}
		if(p->right!=NULL)
		{
		    printf("\np-> right is not null");
			enqueue(p->right);
		}
	}
 return max;
}
// Driver program
int main(void)
{
	struct node*NewRoot=NULL;
	struct node *root = newNode(2);
	root->left	 = newNode(7);
	root->right	 = newNode(5);
	root->left->right = newNode(6);
	root->left->right->left=newNode(1);
	root->left->right->right=newNode(11);
	root->right->right=newNode(9);
	root->right->right->left=newNode(4);

	printf ("\nMaximum element using recursion is %d \n", findMax(root));
    printf("\n\nmaximum element using iteration is %d",maxusingiteration(root));
	return 0;
}

