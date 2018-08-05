#include <stdio.h>
#include "../GCD Pair/GCDPair.c" 
//Provides GCD of all elements in an array of size n.
int gcdA(int* arr, int n){
	if(n<=0)
		return 0;
	if(n==1)
		return arr[0];
	if(n==2)
		return gcd(arr[0],arr[1]);
	return gcd(gcdA(arr,n/2),gcdA(arr+(n/2),n-(n/2)));
}
