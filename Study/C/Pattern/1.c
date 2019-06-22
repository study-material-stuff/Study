#include<stdio.h>

void pattern(int rows)
{
	int icnt = 1;

	for(int i = rows ; i > 0 ; i--)
	{
		for(int cnt = 0; cnt < icnt ; cnt++)
		{
			printf("   ");
		}
		for(int j = 1 ; j <= (i + (i-1)) ; j++)
		{
			printf(" %d ",j);
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
	pattern(iNo);
	return 0;
}
