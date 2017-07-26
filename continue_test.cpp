#include<stdio.h>
int main()
{
	int i;
	for(i=-2;i<4;i++)
	{
		if(i<0)
		 continue;
		printf("the value of i is %d\n",i) ;
		printf("will thisprint\n",i) ;
	}
}
