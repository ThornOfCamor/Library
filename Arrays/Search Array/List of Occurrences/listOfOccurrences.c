#include <stdio.h>
#include "../../Merge Arrays/Merge.c"
#include <stdlib.h>

int* listOfOccurrences(int *A,int n,int B, int *c,int index){
	int i;
	int d,e;
	if(n<=0){
		*c = 0;
		return 0;
	}
	int *C;
	if(n==1)
		if(A[0]==B){
			*c = 1;
			C = (int*)malloc(sizeof(int));
			C[0] = index;
			return C;
		}
		else{
			*c = 1;
			return 0;
		}
	*c = noOfOccurrences(A,n,B);
	return merge(listOfOccurrences(A,n/2,B,&d,index),noOfOccurrences(A,n/2,B),listOfOccurrences(A+n/2,n-(n/2),B,&e,n/2+index),noOfOccurrences(A+n/2,n-(n/2),B));
}