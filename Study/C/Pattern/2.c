#include<stdio.h>

void pattern(int rows)
{
	int icnt = 0;
	
	for(int i = 1 ; i <= (rows/2)+1 ; i++)
	{
		for(int cnt = (rows/2) - icnt ; cnt > 0 ; cnt--)
		{
			printf("   ");
		}
		
		for(int j = 1 ; j <= (i + (i-1)) ; j++)
		{
			printf(" * ");			
		}

		printf("\n");
		icnt++;
	} 
	icnt = 1;
	for(int i = (rows/2) ; i > 0 ; i--)
	{
		for(int cnt = 0; cnt < icnt ; cnt++)
		{
			printf("   ");
		}
		for(int j = 1 ; j <= (i + (i-1)) ; j++)
		{
			printf(" * ");
		}
		
		
		printf("\n");
		icnt++;
	} 
}

int main()
{

	int iNo = 0;

	printf("Enter the number of rows \n\n");
	scanf("%d",&iNo);
	printf("\n\n");

	pattern(iNo);
	return 0;
}
