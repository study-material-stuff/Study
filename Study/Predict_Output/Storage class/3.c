#include <stdio.h>

int i = 11;

int main()
{
	int i = 21;
	
	extern int i; // Error
	
	i = 51;
	printf("%d \n",i);
	return 0;
}
