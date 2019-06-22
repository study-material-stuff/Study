#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;

	int *const  ptr = &a;
 	
	*ptr = 50; 

	printf("\n Value of pointer : %d ",*ptr);
	printf("\n Value of a : %d ",a);

	/*ptr = &b;    //Error
	
	printf("\n Value of pointer : %d ",*ptr);
	printf("\n Value of b : %d ",b);
	*/
}


