#include <stdio.h>
#include "../lib.h"

int main(){
	int a[] = {1, 1, 1, 2, 3, 4};
	int i, *b;
	printf("Successful Test\n");
	printf("Testing noOfDivisors = 253: %d\n",noOfDivisors(253));
	printf("Testing factorial of 10: %lld\n", fact(10));
	printf("Testing noOfOccurrences a = {1, 1, 1, 2, 3, 4}: %d\n", noOfOccurrences(a, 6, 2));
	printf("Testing arrayOfDigits and AtoN: %lld\n", AtoN(arrayOfDigits(34567, &i), 5));
	printf("Testing sqrtN for 132: %ld\n", sqrtN(132)*(sqrtN(132)+1));
	printf("Testing noOfPrimeFactors for 289: %d\n", noOfPrimeFactors(289));
	printf("Cheching 199C100: %lld\n", nCr(199, 99));
	b = arrayOfDigits(4, &i);
	for(int j=0;j<i;j++)
		printf("%d", b[j]);
	printf("\n");
	long long int j = 100000000000000;
	j++;
	printf("%lld\n", j);
	return 0;
}
