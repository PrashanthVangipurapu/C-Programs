#include<stdio.h>
#include<string.h>
void permute(char *,int ,int );
void swap(char *p,char *q)
{
	char temp=*p;
	     *p=*q;
	     *q=temp;
}
int main()
{
	printf("Enter the length of string ");
	int n;
	scanf("%d",&n);
	char a[n];
	printf("Enter the string ");
	for(int i=0;i<n;i++)
	{
		//printf("\nIt has entered");
		scanf("%s",&a[i]);
		//printf("\ndone");
	}
	printf("\ncame out\n");
	int l=0;
	int r=strlen(a);
	printf("length of string is %d",r);
	permute(a,l,r);
}
void permute(char *a,int l,int r)
{
	//l denotes first character. r denotes last character.
	printf("\nit has enetered the function with l and r equal to %d %d ",l,r);
	int i;
	if(l==r)
	 {
	 	printf("This is entered here ");
	 	printf("%s",a);
	 	
	 }
	else
	{
		swap(a+l,a+i);
		//printf("The value of l+1 is %d and the value of r is %d",(l+1),r);
		permute(a,l+1,r);
		swap(a+l,a+i);
	}
	 
}
