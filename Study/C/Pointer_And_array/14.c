#include <stdio.h>

int main()
{
	
	int a = 10;

	int *ptr = &a;
	void *p = ptr;
	
	++*ptr;
	*p++;

	printf("\n %d ",*ptr);
	printf("\n %d ",p);
}


