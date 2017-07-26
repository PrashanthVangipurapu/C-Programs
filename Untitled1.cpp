#include<stdio.h>
int main()
{
	int a=10,z=20;
	int *b=&a;
	int **c=&b;
	printf("%d %d",*c,b);
	b=&z;
	printf("\n%d %d %d",*c,b,a);
	if(*c==b)
	{
		printf("true");
	}
	
}
