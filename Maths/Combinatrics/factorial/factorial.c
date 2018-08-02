#include <stdio.h>

long long int fact(int n){
	if(n==0||n==1)
		return 1;
	if(n==2)
		return 2;
	return n*fact(n-1);
}
