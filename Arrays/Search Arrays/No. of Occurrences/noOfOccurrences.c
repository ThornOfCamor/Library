#include <stdio.h>

//Counts the number of occurences of B in array A of size n
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
