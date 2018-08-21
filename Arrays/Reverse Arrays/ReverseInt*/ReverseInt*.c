#include <stdio.h>
#include <stdlib.h>

int* reverseArray(int* A, int n){
	if(n<=0){
		printf("Error: Size must be greater than 0. Reverse failed");
		return A;
	}
	if(n==1)
		return A;
	int* B;
	B = (int*)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++)
		B[i] = A[i];
	reverseArrayVoid(B, n);
	return B;
}
