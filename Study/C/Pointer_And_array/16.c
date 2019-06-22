#include <stdio.h>

int main()
{
	
	int arr[] = {1,2,3,4,5} ;

	int *ptr1 = arr;
	int *ptr2 = ptr1 + 2;
	
	
	printf("\n ptr1 : %d  ptr2 : %d ",ptr1 , ptr2);
}


