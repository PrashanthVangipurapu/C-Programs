#include<stdio.h>
void fun1(int a, int b,int c)
{
	int res=a+b+c;
	printf("result is %d",res);
}
int main()
{
	int a,b,c;
	fun1(b=3,c=5,a=2);
}

