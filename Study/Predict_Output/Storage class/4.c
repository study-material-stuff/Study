#include <stdio.h>


int main()
{
	
	extern int i; // Error
	
	i = 51;
	printf("%d \n",i);
	return 0;
}

int i = 11;

