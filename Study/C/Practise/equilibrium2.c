#include <stdio.h>
#include <stdlib.h>

int ChkEquilibrium(int *arr, int n)
{
	int iRet = -1;
	int Left = 0;
	int Right = 0;

	for(int i = 0 ; i < n ; i++)
	{
		Left = 0;

		for(int j = 0 ; j <= i ; j++)
		{	
			Left += arr[j];
		}
		
		Right = 0;

		for(int j = i+2 ; j < n ; j++)
		{
			Right += arr[j];
		}
		
		printf(" \n Left = %d , Right = %d",Left,Right);
	
		if(Left == Right)
		{
			return i+2;
		}
	}

		
	

	return iRet;
}

int main()
{
	int *arr = NULL;
	int n = 0;
	
	printf("Enter the number");
	scanf("%d",&n);

	arr = (int*) malloc(n * sizeof(int));

	printf("Enter the elements");

	for (int i = 0 ; i < n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int iAns = ChkEquilibrium(arr,n);
	printf("\nAns = %d",iAns);
}
