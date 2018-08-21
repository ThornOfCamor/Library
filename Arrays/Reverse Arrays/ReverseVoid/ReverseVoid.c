#include <stdio.h>

//Reverses Array
void reverseArrayVoid(int* A, int n){
	int i = 0, temp;
	if(n<=0){
		printf("Error: 'n' must greater than 0");
	}
	while(i<n/2){
		temp = A[i];
		A[i] = A[n-1-i];
		A[n-1-i] = temp;
		i++;
	}
}
