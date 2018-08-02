#include <stdio.h>

//inc = 1, to check if array is sorted in increasing order
//inc = 0, to check if array is sorted in decreasing order
int isSorted(int* A, int n, int inc){
	int i;
	if(inc != 0 && inc != 1){
		printf("Error: 'inc' must be 0 or 1");
		return -1000;
	}
	if(n==1)
		return 1;
	if(inc == 1){
		for(i=1;i<n;i++)
			if(A[i]<A[i-1])
				return 0;
		return 1;
	}
	else{
		for(i=1;i<n;i++)
			if(A[i]>A[i-1])
				return 0;
		return 1;
	}
}
