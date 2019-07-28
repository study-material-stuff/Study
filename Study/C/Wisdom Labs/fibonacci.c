#include <stdio.h>

void fibo(int n)
{
	static int a = 0;
	static int b = 1;
	static int c = 0;
	
	if(n < 0)
	{	
		return;
	}
	
	printf("\n %d ",c);
		
	a = b;
	b = c;
	c = a+b;
	
	n--;
	fibo(n);
			
}

int main()
{
	int iNo = 0;
	printf("Enter n ");
	scanf("%d",&iNo);

	fibo(iNo);	

}
