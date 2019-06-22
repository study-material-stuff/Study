#include <stdio.h>

int main()
{
	int arr[6] = {1,2,3,4,5,6};

	arr[0,1,2,3,4,5] = 10; // ans : arr[5] = 10
	for(int i = 0 ; i < 6 ; i++)
	printf("%d\n",i[arr]);	// 1,2,3,4,5,10 
}


