#include <stdio.h>

//Calculates the LCM of a and b.
long long int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}
