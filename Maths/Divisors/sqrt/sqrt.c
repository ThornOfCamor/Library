#include <stdio.h>

//Gives [sqrt(n)], where [.] is "Greatest Integer Function".
long int sqrtN(long long int n){
	long int i = 1;
	while(i*i<=n)
		i++;
	return i-1;
}
