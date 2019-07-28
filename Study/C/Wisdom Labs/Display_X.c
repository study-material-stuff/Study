#include <stdio.h>

void Display(int no)
{
	if(no & 1)
	{
		no++;
	}
	int temp = no;
	
	for(int i = 1 ; i <= no ; i++)
	{
		for(int j = 1 ; j <= no ; j++)
		{	
			if( (i == j) || (j == temp))
			{
				printf("*");
			}
			
			printf(" ");
		}
		printf("\n");
		temp--;
	}
}

int main()
{
	int iNo = 0;

	printf("Enter number");
	scanf("%d",&iNo);;

	Display(iNo);	

}
