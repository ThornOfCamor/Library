#include <stdio.h>

//Changes A
void bubbleSort(int* A, int n){
	if(n==1)
		return;
	if(n<=0){
		printf("Error: number of elements in the array must be greater than 0");
		return;
	}
	int i = 0,j=0,temp;
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(A[j]>A[j+1]){
				temp = A[j+1];
				A[j+1] = A[j];
				A[j] = temp;
			}
		}
	}
}
