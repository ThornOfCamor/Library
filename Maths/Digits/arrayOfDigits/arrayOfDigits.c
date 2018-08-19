#include <stdio.h>
#include <stdlib.h>
#include "../noOfDigits/noOfDigits.c"

int* arrayOfDigits(long long int n, int* size){
	int* arr;
	*size = noOfDigits(n);
	arr = (int*)malloc(*size*sizeof(int));
	int i;
	for(i=0;i<*size;i++){
		arr[i] = n%10;
		n = n/10;
	}
	return arr;
}
