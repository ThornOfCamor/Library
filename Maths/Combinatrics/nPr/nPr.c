#include <stdio.h>
#include "../factorial/factorial.c"

long long int nPr(int n, int r){
	if(n<r){
		printf("n must be greater than or equal to r");
		return 0;
	}
	if(r==0)
		return 1;
	if(r==1)
		return n;
	if(n==r)
		return fact(n);
	return (n*nPr(n-1,r))/(n-r);
}
