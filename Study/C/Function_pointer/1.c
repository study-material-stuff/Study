#include <stdio.h>
#include <stdlib.h>

void Add(int a , int b)
{
	printf("%d",a+b);
}

void Sub(int a , int b)
{
	printf("%d",a-b);
}

void Mult(int a , int b)
{
	printf("%d",a*b);
}

void Div(int a , int b)
{
	printf("%d",a/b);
}

int main()
{
	void (**fptr)(int,int) = NULL;

	fptr = malloc (4 * sizeof(fptr));
	
	fptr[0] = Add;	
	fptr[1] = Sub;
	fptr[2] = Mult;
	fptr[3] = Div;

 	for(int i = 0 ; i < 4 ; i++)
	{
		fptr[i](20,10);
		printf("\n\n");
	}

	
	

	
	
	

}


