#include <stdio.h>
#include "../lib.h"

int main(){
	int a[] = {1, 1, 1, 2, 3, 4};
	printf("Successful Test\n");
	printf("Testing noOfDivisors = 253: %d\n",noOfDivisors(253));
	printf("Testing factorial of 10: %lld\n", fact(10));
	printf("Testing noOfOccurrences a = {1, 1, 1, 2, 3, 4}: %d\n", noOfOccurrences(a, 6, 2));
	return 0;
}
