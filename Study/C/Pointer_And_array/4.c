#include <stdio.h>

int main()
{
	int * ptr1 = 0;
	int *ptr2 = NULL;
	
	if(ptr1 == ptr2)
	{
		printf("\nEqual");
	}
	else
	{
		printf("\nNot Equal");
	}

	printf("\nThe value of pointer is %p",ptr1);
}


