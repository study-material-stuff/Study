#include <stdio.h>

int main()
{
	
	int arr[] = {1,2,3,4,5} ;

	int *ptr1 = arr;
	int *ptr2 = arr + 4;
	
	
	printf("\n%d - %d = %d ",ptr2 , ptr1,ptr2 - ptr1 );
}


