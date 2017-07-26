#include<stdio.h>
int res2(int a)
{
	a=200;
	return a;
}
int res1()
{
	int a=1;;
	a=res2(a);
	return a;
}
int main()
{
	printf("the final value is %d",res1());
}
