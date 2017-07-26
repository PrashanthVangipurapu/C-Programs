#include<stdio.h>
#include<math.h>

 
void printSubsequences(int arr[], int n)
{
    /* Number of subsequences is (2**n -1)*/
    unsigned int opsize = pow(2, n);
 
    /* Run from counter 000..1 to 111..1*/
    for (int counter = 1; counter < opsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            /* Check if jth bit in the counter is set
                If set then print jth element from arr[] */
            if (counter & (1<<j))
                printf("%d ", arr[j] );
				//printf(" ");
        }
        printf("\n");
    }
}
 
// Driver program
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("All Non-empty Subsequences\n");
    printSubsequences(arr, n);
    return 0;
}
