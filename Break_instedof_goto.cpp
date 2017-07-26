#include<stdio.h>
int main()
{
	int i,j,k;
	for( i=0;i<3;i++)
	  for ( j=0;j<2;j++)
	   for( k=0;k<2;k++)
	    {
	    	printf("the value of i is %d\n",i);
	    	printf("the value of j is %d\n",j);
	    	printf("the value of k is %d\n",k);
	    	printf("\n\n");
	    	if (k>2)
	    	 break;
		}
		
 }
