#include <stdio.h>

//int i = 10;

void fun()
{
	printf("%d \n",i);
}

int main()
{
	printf("%d \n",i);
	i = i + 11;
	fun();
	printf("%d \n",i);
	return 0;
}
