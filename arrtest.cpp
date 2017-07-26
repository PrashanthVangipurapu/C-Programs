#include<stdio.h>
int main()
{
	int n=0;
	while(n<10)
	{
		printf("n is %d \n ",n);
		n++;
	}
	
	int j=10;
	int p=j++;
	int q=++j;
	printf("%d %d",p,q);
	
}
