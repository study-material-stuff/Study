#include <stdio.h>


// right to left precedence 

int main()
{
	int a = 10;
	int *ptr = &a;

	printf("%d %d %d"++(*ptr),(*ptr)++,a);

}


