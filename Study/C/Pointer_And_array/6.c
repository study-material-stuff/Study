#include <stdio.h>

int main()
{
	int arr[6] = {1,2,3,4,5,6};

	arr[1+2] = 10; // ans : arr[3] = 10
	for(int i = 0 ; i < 6 ; i++)
	printf("%d\n",i[arr]);	// 1,2,3,10,5,6 
}


