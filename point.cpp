#include<stdio.h>
int main()
{
	int a=10;
	int *b=&a;
	int **c=&b;
	printf("%d",&a);
	printf("\n%d",*c);
}
