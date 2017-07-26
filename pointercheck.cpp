#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node *left;
	node* right;
};
node *root;
int main()
{    root=NULL;
      printf("\nthe address of root is:%d",root);
	node *temp=(node *)malloc(sizeof(node));
    temp->data=10;
    temp->left=NULL;
    temp->right=NULL;
    root=temp;
    printf("\nthe address of root is:%d",root);
    printf("\n address of temp->left is:%d",&temp->left);
    node **p=&temp->left;
    
    printf("\n p is:%d",p);
    node *temp1=(node *)malloc(sizeof(node));
    temp1->data=50;
    *p=temp1;
    printf("\nthe addres of temp1 is:%d",temp1);
    printf("\nthe addres of p is:%d",temp->left);
    
}
