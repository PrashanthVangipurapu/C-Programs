#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i<j)
			 continue;
			printf("the value of i is %d and the value of j is %d\n",i,j); 
		}
	}
}
