#include <stdio.h>

int noOfDigits(long long int n){
	if(n>=0 && n<10)
		return 1;
	int i = 1;
	while(n/10 != 0){
		n = n/10;
		i++;
	}
	return i;
}
