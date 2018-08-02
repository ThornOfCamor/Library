#include <stdio.h>
#include "../../Merge Arrays/Merge.c"

//Counts the number of occurences of B in A
int noOfOccurrences(int *A, int n, int B){
	int i;
	if(n<=0)
		return 0;
	if(n==1)
		if(A[0]==B)
			return 1;
		else
			return 0;
	return noOfOccurrences(A,n/2,B)+noOfOccurrences(A+n/2,n-(n/2),B);
}
