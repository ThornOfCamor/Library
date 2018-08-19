#include <stdio.h>

int noOfDigits(long long int n){
	int i = 1;
	while(n/10 != 0){
		n = n/10;
		i++;
	}
	return i;
}
