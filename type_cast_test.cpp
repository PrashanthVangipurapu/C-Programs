#include<stdio.h>
int main()
{
	int a=10;
	float f=10.0;
	int d=(int) f;
	if(a==d)
	printf("%d %d",a,d);
	f=(int) 100.451;
	printf("\n%d",f);
	
}
