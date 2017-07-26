/* A Naive C/C++ recursive implementation of LIS problem */
#include<stdio.h>
#include<stdlib.h>
 
/* To make use of recursive calls, this function must return
   two things:
   1) Length of LIS ending with element arr[n-1]. We use
      max_ending_here for this purpose
   2) Overall maximum as the LIS may end with an element
      before arr[n-1] max_ref is used this purpose.
   The value of LIS of full array of size n is stored in
   *max_ref which is our final result */
int _lis( int arr[], int n, int *max_ref)
{
	
    /* Base case */
    if (n == 1)
        return 1;
 
    // 'max_ending_here' is length of LIS ending with arr[n-1]
    int res, max_ending_here = 1; 
    
    /* Recursively get all LIS ending with arr[0], arr[1] ...
       arr[n-2]. If   arr[i-1] is smaller than arr[n-1], and
       max ending with arr[n-1] needs to be updated, then
       update it */
    for (int i = 1; i < n; i++)
    {
    	printf("\n\n");
    	printf("\nthe value of i  is %d",i);
    	printf("\nthe value of max_ref for %d is %d",i,max_ref);
        res = _lis(arr, i, max_ref);
        printf("\nthe value of res is for %d is %d",i,res);
        if (arr[i-1] < arr[n-1] && res + 1 > max_ending_here)
           {
		     printf("\n\t i-1 is %d, arr[i-1] is %d",(i-1),arr[i-1]);
		     printf("\n\t n-1 is %d, arr[n-1] is %d",(n-1),arr[n-1]);
			 max_ending_here = res + 1;
			 printf("\n\t max_ending here for %d is %d",i,max_ending_here);
		   }
    }
 
    // Compare max_ending_here with the overall max. And
    // update the overall max if needed
    if (*max_ref < max_ending_here)
    {
      printf("\n\n\t *max_ref is %d",*max_ref);
	  printf("\n\t in if max_ending_here is %d",max_ending_here);	
	  *max_ref = max_ending_here;
    }
    // Return length of LIS ending with arr[n-1]
    return max_ending_here;
}
 
// The wrapper function for _lis()
int lis(int arr[], int n)
{
    // The max variable holds the result
    int max = 1;
 
    // The function _lis() stores its result in max
    _lis( arr, n, &max );
 
    // returns max
    return max;
}
 
/* Driver program to test above function */
int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Length of lis is %d\n",
           lis( arr, n ));
    return 0;
}