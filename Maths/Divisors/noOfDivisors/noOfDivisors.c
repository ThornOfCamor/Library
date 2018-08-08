#include <stdio.h>
#include <math.h>
#include "../isSqrt/isSqrt.c"
#include "../../Prime/IsPrime.c"

//Gives the number of divisors of n, including 1 and n.
int noOfDivisors(long long int n){
	int count = 1;
	int i, k = 1;
	int a = 0;
	int r;
	if(isPrime(n)==1)
		return 2;
	if(n==1)
		return 1;
	r = n;
	while(r%2 == 0){
		r = r/2;
		a++;
	}
	count = count * (a+1);
	a = 0;
	if(isPrime(r)==1){
			count = count*2;
			return count;
		}
	while(r%3 == 0){
		r = r/3;
		a++;
	}
	if(isPrime(r)==1){
			count = count*2;
			return count;
		}
	count = count * (a+1);
	a = 0;
	for(i=1;k<=sqrtN(n);i++){
		k = 6*i - 1;
		if(isPrime(r)==1){
			count = count*2;
			break;
		}
		if(isPrime(k)==1)
			while(r%k == 0){
				r = r/k;
				a++;
			}
		count = count * (a+1);
		a = 0;
		if(isPrime(r)==1){
			count = count*2;
			break;
		}
		k += 2;
		if(k>sqrtN(n))
			return count;
		if(isPrime(k)==1)	
			while(r%k == 0){
				r = r/k;
				a++;
			}
		count = count * (a+1);
		a = 0;
	}
	return count;
}
