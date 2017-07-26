#include<stdio.h>
int main()
{
	int i,j,k;
	for( i=0;i<10;i++)
	  for ( j=0;j<5;j++)
	   for( k=0;k<5;k++)
	    {
	    	printf("the value of i is %d\n",i);
	    	printf("the value of j is %d\n",j);
	    	printf("the value of k is %d\n",k);
	    	printf("\n\n");
	    	if (k>2)
	    	 goto hii;
		}
		
   //printf("\ncame out with values of i,j and k are %d %d %d",i,j,k); will not get executed here.
   hii:printf("\nhii all of you");
   printf("\ncame out with values of i,j and k are %d %d %d",i,j,k);		
}
