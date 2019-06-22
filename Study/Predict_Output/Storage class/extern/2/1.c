#include <stdio.h>

extern int i;
extern fun();


int main()
{
	
	i = 21;
	printf("%d \n",i);	
	fun();
	
	return 0;
}

