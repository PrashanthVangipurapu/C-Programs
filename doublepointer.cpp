#include<stdio.h>
int main()
{
	int b=10;
	int *z=&b;
	int **a=*z;
	printf("address of **a is:%d",*a);
}
