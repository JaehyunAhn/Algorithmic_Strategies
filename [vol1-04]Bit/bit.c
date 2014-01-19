#include <stdio.h>
void printBinary(int *number) {
	int sample = *number;
	int printNum[32];
	int i = 0;
	while(sample != 0) {
		if((sample&1) == 0) // bitwise expression
			// if last digit is 0,
			printNum[i] = 0;
		else
			printNum[i] = 1;
		i++;
		sample = sample>>1;
	}
	for(i-=1;i>=0; i--)
		printf("%d",printNum[i]);
	printf("\n");
}

int main() {

	int a = 11;
	printBinary(&a);
	return 0;
}
