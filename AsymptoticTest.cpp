#include<stdio.h>
int pow2(int,int);
int main()
{
	int a=pow2(6,6);
	printf("The value of the function is: %d",a);
}
int pow2(int x,int n) {
    if(n==0){
        return 1;
    }
    else if(n&1){
        int p = pow2(x, (n-1)/2);
        return x * p * p;
    }
    else {
        int p = pow2(x, n/2);
        printf("\nThe value of p is %d"+p);
        return p * p;
    }
}
