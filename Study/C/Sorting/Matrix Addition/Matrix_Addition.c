#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define MEMERR 0

int** MarixAddition(int* arr1 , int* arr2,int row,int col)
{
	int** SumMatrix = NULL;
	
	SumMatrix = (int **)malloc(row * sizeof(int));

	if(SumMatrix == NULL)
	{		
		return MEMERR;
	}

	for(int i = 0 ; i < row ; i++)
	{
		SumMatrix[i] = (int *)malloc(col * sizeof(int));

		if(SumMatrix[i] == NULL)
		{
			return MEMERR;
		}

		for(int j = 0 ; j < col ; j++)
		{
			int a = *((arr1 + i*col) + j);
			int b = *((arr2 + i*col) + j);
			SumMatrix[i][j] = a + b;			
		}
	}

	return SumMatrix;
}

int main()
{
	int arr1[][3] = {1,2,3,4,5,6,7,8,9};
	int arr2[][3] = {2,4,6,8,10,12,14,23,11};

	int** SumMatrix = MarixAddition((int*)arr1,(int*)arr2,3,3);
	
	if(SumMatrix == MEMERR)
	{	
		printf("Error : Memory not available");
		exit(0);
	}
	
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
		{
			printf(" %d ",SumMatrix[i][j] );
		}
	}


	return 0;
}
