#include<stdio.h>
int main()
{
	int i=0,p=0;
	for(i=1;i<10;i++)
	{
		p=i;
		if(i==5)
		{
		 printf("\nhere it is %d\n",i);
		 continue;
	    }
	    
	    else if(p%5==0)
	    {
	    	printf("\nvalue is %d",i);
		}
	}
}
