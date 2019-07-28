#include<stdio.h>

void pattern(int rows)
{

	int Cnt = 1;
		
	for(int first_half = 1 ; first_half <= (rows/2) ; first_half++)
	{
	
		for(int icnt = (rows/2) - Cnt ; icnt > 0 ; icnt-- )
		{
			printf("   ");
		}
	
		for(int i = 1 ; i  <=  first_half + (first_half - 1) ; i++)
		{
			printf(" %d ",i);		
		}

		printf("\n");
		Cnt++;		
	}

	Cnt = (rows/2);

	for(int second_half = (rows/2) ; second_half > 0 ; second_half--)
	{
		for(int icnt = (rows/2) - Cnt ; icnt > 0   ; icnt--)
		{
			printf("   ");
		}
		
		for(int i = 1 ; i <= second_half + (second_half -1) ; i++ )
		{
			printf(" %d ",i);
		}	
		
		Cnt--;
		printf("\n");
		
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
