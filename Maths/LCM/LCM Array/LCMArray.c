#include <stdio.h>
#include "../LCM Pair/LCMPair.c"

int lcmA(int* arr, int n){
	if(n<=0)
		return 0;
	if(n==1)
		return arr[0];
	if(n==2)
		return lcm(arr[0],arr[1]);
	return lcm(lcmA(arr,n/2),lcmA(arr+(n/2),n-(n/2)));
} 
