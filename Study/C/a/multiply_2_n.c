#include<stdio.h>

// negates the bit of val acccording to the bits of keys

int raised_to(int num , int n)
{	
	return num << n;
}

struct node
{
	int a;
}obj ;

int main()
{
	
	struct node * ptr = &obj;

	printf("%d",ptr -> a);
		
	return 0;
}
