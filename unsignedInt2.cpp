#include<stdio.h>
#include<math.h>
int main()
{
	int n=5;
	int a=6;
	
	unsigned int opsize=pow(2,n);
	for(int counter=1;counter<opsize;counter++)
	{
		printf("%u\n",counter);
	}
	
	printf("%d",1<<3);
}
