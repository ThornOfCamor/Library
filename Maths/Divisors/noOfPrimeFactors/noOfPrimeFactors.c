#include <stdio.h>

int noOfPrimeFactors(long long int n){
	int i = 2;
	int count = 0;
	if(isPrime(n)==1)
		return 1;
	while(i*i<=n){
		if(n%i==0)
			if(isPrime(i)==1 && isPrime(n/i)==1 && i != (n/i))
				count += 2;
			else if(isPrime(i)==1 || isPrime(n/i)==1)
				count++;
		i++;
	}
	return count;
}
