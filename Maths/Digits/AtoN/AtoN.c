#include <stdio.h>
#include "../power/power.c"

//Returns a number from an array of digits
long long int AtoN(int* arr, int arr_count){
	int i;
	long long int num = 0;
	for(i=0;i<arr_count;i++){
		num += arr[i] * power(10, i);
	}
	return num;
}
