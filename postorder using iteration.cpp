#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node *right;
	node *left;
};
void push1(node *);
void push2(node *);
node *pop();
int tos1=-1,tos2=-1;
node *stack1[30],*stack2[30];
void postorder(node *);
void insert(node **,int data);
void display();
node *root;
int main()
{
	root=NULL;
	//printf("entered main\n");
	insert(&root,50);
//	printf("50 inserted\n");
	insert(&root,30);
//	printf("30 inserted\n");
	insert(&root,70);
//	printf("70 inserted\n");
	insert(&root,15);
//	printf("15 inserted\n");
	insert(&root,35);
//	printf("35 inserted\n");
	insert(&root,65);
//	printf("65 inserted\n");
	insert(&root,75);
//	printf("75 inserted\n");
	printf("\n");
		//printf("\n");
	printf("postorder presentation\n");
	postorder(root);
     display();
     printf("\ncomplete");
 

}

void insert(node **p,int data)
{
	if(*p==NULL)
	{
		//printf("\nfirst node\n");
		node *temp=(node *)malloc(sizeof(node));
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;
		*p=temp;
		return;
	}
	else
	{
	//printf("\nnot a first node");
	if((*p)->data>data)
	{
		//printf("\ninsert left side %d",(*p)->data);
		insert(&(*p)->left,data);
	}
    if((*p)->data<data)
    {
    	//printf("\ninsert right side %d",(*p)->data);
    	insert(&(*p)->right,data);
	}
  }
}

void postorder(node *p) //in this function, initially we push the root node into the stack mentioned push1(P);
{   //after pushing the root node, we pt a while loop for the remaining children nodes of the root.
    //in while loop we first pop the root node and push the popped
    // node into stack2 which collects all the nodes popped from stack1.
	// before push2 operation we need push1 all the child nodes of popped node into stack1.
	//after push1 of all child nodes we push2 the popped node. this procedure repeats.
	
	
	printf("\nentered the postorder function");
	printf("\np->data:%d",p->data);
	push1(p); 
	while(tos1!=-1) 
	{
		node *q=pop();
		if(q->left!=NULL &&  q->right!=NULL) //problem occurs when the tree reaches the children present 
		{                                    //in the right sub-tree. once check if u dont understand by 
		push1(q->left);                      //removing if condition
		push1(q->right);
		}
		push2(q);
	}
}

void push1(node *p)
{
	//printf("\npush1 called with data %d",p->data);
	tos1=tos1+1;
	stack1[tos1]=p;
}
void push2(node *q)
{
	//printf("\npush2 called with data %d",q->data);
	//printf("\n\ttos2 is in function %d",tos2);
	tos2=tos2+1;
	stack2[tos2]=q;
}

node *pop()
{
    //printf("\npop called and the topmost element is:%d",stack1[tos1]->data);
	if(tos1!=-1)
	{
	node *q=stack1[tos1];
	tos1=tos1-1;
	return q;
  }
}
/*void display()
{
	printf("\ntos2 is:%d",tos2);
	for(int i=tos2;i>0;i--)
	{
		printf("i is%d",i);
		printf("\n%d",stack2[i]->data);
	}
}*/

void display()
{
	//printf("\ntos2 is:%d",tos2);
	for(int i=tos2;tos2>=0;tos2--)
	{
		//printf("\ni is%d",i);
		//printf("\ttos2 is%d",tos2);
		printf("\n%d",stack2[tos2]->data);
	}
}
