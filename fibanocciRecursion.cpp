#include<stdio.h>
int fib(int );
int main()
{
	int n;
	printf("\nEnter user entry: ");
	scanf("%d",&n);
	printf("The fibanocci value is %d ",fib(n));
}
int fib(int n)
{
	if (n==1)
	{
		printf("n is equal to 1\n");
		return 1;
	}
	if(n<1)
	  {
	  printf("n is less than 1\n");
	   return 1;
      }
	  
	  printf("The value of n is %d\n",n); 
	  return fib(n-1)+fib(n-2); 
	  
}
