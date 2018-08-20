#include <stdio.h>
#include "../lib.h"

int main(){
	int a[] = {1, 1, 1, 2, 3, 4};
	int i;
	printf("Successful Test\n");
	printf("Testing noOfDivisors = 253: %d\n",noOfDivisors(253));
	printf("Testing factorial of 10: %lld\n", fact(10));
	printf("Testing noOfOccurrences a = {1, 1, 1, 2, 3, 4}: %d\n", noOfOccurrences(a, 6, 2));
	printf("Testing arrayOfDigits and AtoN: %lld\n", AtoN(arrayOfDigits(34567, &i), 5));
	printf("Testing sqrtN for 132: %ld\n", sqrtN(132)*(sqrtN(132)+1));
	return 0;
}
