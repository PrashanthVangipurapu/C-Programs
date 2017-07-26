#include<stdio.h>
int res2(int *p)
{
	*p=*p+1;
	if(*p>10)
	return 1;
	
	
	int res=300;
	for(int i=1;i<3;i++)
	{
		printf("the value of p is %d\n",p);
		res2(p);
		printf("\n");
		printf("the value of *p is %d\n",*p);
	    printf("the value of normal p is %d\n",p);	
	    printf("the value of &p is %d\n",&p);
	}
	
	
	*p=res;
	
}
int res1(int a)
{
	int max=1;
	res2(&max);
	return max;
}
int main()
{
	printf("the final value is %d",res1(10));
}
