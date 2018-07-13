#include <stdio.h>
#include <stdlib.h>

//Merging only arrays sorted in increasing order
int* merge(int* A, int nA,int* B, int nB){
	if(nA==0)
		return B;
	if(nB==0)
		return A;
	int i=0,j=0,k=0;
	int* C;
	C = (int*)malloc((nA+nB)*sizeof(int));
	while(i<nA && j<nB && k<nA+nB){
		if(A[i]>B[j]){
			C[k]=B[j];
			j++;
		}
		else{
			C[k]=A[i];
			i++;
		}
		k++;
	}
	if(i==nA){
		for(j;j<nB;j++){
			C[k]=B[j];
			k++;
		}
	}
	else
		for(i;i<nA;i++){
			C[k]=A[i];
			k++;
		}
	return C;
}