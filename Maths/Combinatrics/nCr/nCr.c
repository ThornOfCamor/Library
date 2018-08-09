#include <stdio.h>

long long int nCr(int n, int r){
	if(n<r){
		printf("n must be greater than or equal to r");
		return 0;
	}
	if(r==0)
		return 1;
	if(r==1)
		return n;
	return (n*nCr(n-1,r-1))/r;
}
