#include <stdio.h>
#include <stdlib.h>
#define MAX(X,Y) ((X > Y)?X:Y) 
/*
   p.118 Consecutive Number Naive Way(2)
	input: consecutive number
	output: max sum
*/
int main () {
	// test case
	int size;
	scanf("%d",&size);

	int i,j;
	int *arr = (int *) malloc (sizeof(int)*size);
	for(i=0; i<size; i++)
		scanf("%d",&arr[i]);

	/* search module
	 * size: size of input
	 * arr : data array */
	int max = -10e8; // very small number
	int sum = 0;	// initialzie
	printf("%d\n",max);
	for(i=0; i<size; i++) {
		for(j=i; j<size; j++) {
			sum += arr[j];
			max = MAX(sum, max);
		}
		sum = 0;
	}

	printf("Result is %d\n",max);

	free(arr);
	return 0;
}
