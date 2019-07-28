#include <stdio.h>

void Display(int no)
{
	int temp = no;
	for(int i = 0 ; i < no ; i++)
	{
		for(int j = 0 ; j <= no+1 ; j++)
		{
			if(j == temp || ((i == 0) && (j == temp-1)))
			{
				printf(" *");
			}
			else
			{
				printf(" ");
			}

			if( ( (i == no-1) && (j == 0) ) || ((j == no+1) && (i == no-1))	 )
			{
				printf("*");
			}	
		
			if( (i == j) && (i > no/2) )
			{
				printf("*");
			}

			
		}
		temp--;
		printf("\n");
	}
}

int main()
{
	int iNo = 0;

	printf("Enter number");
	scanf("%d",&iNo);;

	Display(iNo);	

}
