#include<stdio.h>

void pattern(int rows)
{

	int temp = (rows*2) -1;

	for(int i = 0 ; i < rows ; i++)
	{	
		for(int j = 1 ; j <= temp ; j++ )
		{
			printf(" %d ",j);
		}

		printf("\n");
		temp -= 2;		
		for(int j = 0 ; j <= i ; j++ )
		{
			printf("   ");
		}
		
	}	
}

int main()
{

	int iNo = 0;

	printf("Enter the number of rows \n\n");
	scanf("%d",&iNo);
	pattern(iNo);
	return 0;
}
