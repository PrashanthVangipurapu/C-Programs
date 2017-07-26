#include<stdio.h>
#include<stdlib.h>
struct node{   // this creates a node which has  ||left*|data|right*||   
	int data;
	node *right;
	node *left;
};
void insert(int,node *,int );  
void display(node *);
node *root;  //every tree has a root node which intitally is pointed to null indicating that tree has not yet created.
int count=0; //count variable is used to judge whther we need to insert the first or the root node in the tree or another node. count =0 indicates first node and count =1 indicates remianing nodes.
int main()
{
	printf("\naddress inside root is:%d",root);  //since root is null adress inside root will be 0.
	root=NULL;
	printf("\ninserting 10");
	insert(10,root,0);  // the third arguments is flag lag variaariable. it tells about the flag status.
	printf("\n");
	printf("\naddress inside root is:%d",root);
	printf("\ninserting 6");
	insert(6,root,0); // initally flag variable is always kept 0. flag=1 indicates inserting on the left side, and flag =2 indicates inserting on the right side.
	printf("\naddress inside root is:%d",root);
	printf("\naddress of root->left is:%d",root->left);
	printf("\n");
	printf("\ninserting 15");
	insert(15,root,0);
	printf("\naddress of root is:%d",root);
    printf("\naddress of root->right is:%d",root->right);
	printf("\n");
	printf("\ninserting 5");
	insert(5,root,0);
	printf("\naddress of root is:%d",&root);
     printf("\n");
     printf("\ninserting 8");
	insert(8,root,0);
	printf("\naddress of root is:%d",&root);
	printf("\n");
	printf("\ninserting 11");
	insert(11,root,0);
	printf("\naddress of root is:%d",&root);
	printf("\n");
	printf("\ninserting 18");
	insert(18,root,0);
	printf("\naddress of root is:%d",&root);
	printf("\n\n");
	display(root);
}

void insert(int d,node *p,int flagg)
{
   int flag;
	printf("\nthe value of p is:%d",p);
	if(p==NULL && count==0)
	{ 
	  // this indicates that we are inserting the first node in the tree. 
		printf("\nentering only the first node");
		node *temp;
		temp=(node *)malloc(sizeof(node));
		temp->data=d;
		temp->left=NULL;
		temp->right=NULL;
		printf("\naddress of temp is:%d",temp);
		root=temp;
		count++;
		return;
	}
	else if(count!=0 &&(flagg==1 || flagg==2))
	{
		// this is used for creating another nodes in the tree. the usage of condition flag==1 ||flag==2 in else if is because withou that condition a dummy temp node is created which is not used at all. memory problems will ocur. once check it by removing that condition.
		printf("\nentering the remaining nodes");
		node *temp;
		temp=(node *)malloc(sizeof(node));
		temp->data=d;
		temp->left=NULL;
		temp->right=NULL;
		printf("\naddress of temp is:%d",temp);
		if(flagg==1)
		{
			printf("\n insert left side");
			p->left=temp;
			return;
		}
		else if(flagg==2)
		{
			printf("\n insert right side");
			p->right=temp;
			return;
		}
    printf("\ncompletd else if");
	 
	}
	
	while(p->left!=NULL && p->right!=NULL)
	{
		//This loop is only used to check where to insert the new node, whther to the left or to the right. This loop will correctly stop near the present last node.
		printf("\nentered while");
		if(p->data<d)
		{
			printf("\nright side");
			if(p->right!=NULL)
			{
				p=p->right;
			}
			else break;
		}
		else if(p->data>d)
		{
			printf("\nleft side");
	        if(p->left!=NULL)
			  p=p->left;
			  else
			  break;		
		}
	}
	// the above loop will stop at the present last node. Now u need to check the present last node.
	// whther it is bigger than newly inserted node or smaller than newly inserted node.
	if(p->data>d)
	{ printf("\nchecking left condition");
	   flag=1;
		insert(d,p,flag);
	}
	else if(p->data<d)
	{
		printf("\nchecking right condition");
		flag=2;
		insert(d,p,flag);
	}
	
}

void display(node * tree)
{
	
    if (tree)
    {
    
	    display(tree->left);
        display(tree->right);
        printf("\n%d\n",tree->data);
    }
}

