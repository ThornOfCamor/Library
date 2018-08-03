#include <stdio.h>

//Returns B 1 occurs in A, else returns 0
//n = size of A
int occurrence(int* A, int n, int B){
	int i;
	if(n<=0)
		return 0;
	if(n==1)
		if(A[0]==B)
			return 1;
		else
			return 0;
	if(occurrence(A,n/2,B)==1)
		return 1;
	else if(occurrence(A+n/2,n-(n/2),B)==1)
		return 1;
	else
		return 0;
}
