#include <stdio.h>


int main()
{
	
	extern int i;
	i = 100;

	printf("%d \n",i);
	return 0;
}
