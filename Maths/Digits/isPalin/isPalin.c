#include <stdio.h>
#include "../arrayOfDigits/arrayOfDigits.c"
#include "../toBinary/toBinary.c"

//Can currently take decimal and binary input.
int isPalin(int n, int base){
	int* arr, size, i;
	if(base==2)
		arr = toBinary(n, &size);
	else if(base==10)
		arr = arrayOfDigits(n, &size);
	else
		return -1;
	if(size == 1)
		return 1;
	for(i=0;i<=size/2;i++)
		if(arr[i] != arr[size-i-1])
			return 0;
		return 1;
}
