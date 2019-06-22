#include <stdio.h>

int main()
{
	int a = 10;
	
	//const int *ptr = &a; *ptr = 50; // Assignment Error ie ptr is read only 	
	int *ptr = &a;

	*ptr = 50; 

	printf("\n Value of pointer : %d ",*ptr);
	printf("\n Value of a : %d ",a);

}


