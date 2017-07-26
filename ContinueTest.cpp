#include<stdio.h>
int main()
{
	int i=0;
	while(i<10)
	{
		printf("\nAgain in while loop");
        i++; 
		if(i<3)
		{
			//printf("\n i is less than 3");
			continue;
			printf("after continue in if");
		}
	      
	     else
		 {
		   
	      	printf("\ni is greater than 3");
	      	continue;
	      	printf("\nafter continue iin else");
	}
		  printf("\nafter if and else");
		  i++;
		}
}
