#include<stdio.h>
int main()
{
	
	int a=10;
	int *p=&a;
	
	printf("the value of *p is %d\n",*p);
	printf("the value of p is %d \n",p);
	printf("the value of &a is %d\n", &a);
}
