#include <stdio.h>

//Reverses Array
void reverseArrayVoid(int* A, int n){
	int i,temp;
	if(n<=0){
		printf("Error: 'n' must greater than 0");
	}
	for(i=0;i<n/2;i++){
		temp = A[i];
		A[i] = A[n-1-i];
		A[n-1-i] = temp;
	}
}
