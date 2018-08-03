#include <stdio.h>
#include <stdlib.h>

//A may change
//n = number of elements
int* mergeSort(int* A, int n){
	if(n<=0){
		printf("Error: number of elements in the array must be greater than 0");
		return NULL;
	}
	if(isSorted(A,n,1)==1) //If already sorted, return as it is
		return A;
	if(isSorted(A,n,0)==1){//If array is sorted in decreasing order, reverse and return
		reverseArrayVoid(A,n);
		return A;
	}
	A = merge(mergeSort(A,n/2),n/2,mergeSort(A+n/2,n-(n/2)),n-(n/2));
	return A;
}
