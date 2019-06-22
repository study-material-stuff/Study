#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define MEMERR 0
#define MATRIXERR 1


int** MarixMultiplication(int* arr1 , int* arr2,int row1,int col1,int row2, int col2)
{

	int** MultMatrix = NULL;
	
	if(col1 != row2)
	{
		return (int**)MATRIXERR; 
	}

	MultMatrix = (int**) malloc (row1 * sizeof(int));
	
	for(int i = 0 ; i < row1 ; i++)
	{
		*(MultMatrix + i) = (int*) malloc (col1 * sizeof(int));

		for(int j = 0 ; j < col1 ; j++)
		{			
			for(int k = 0 ; k < col2 ; k++)
			{
				int a = *( (arr1 + i*col1) +k);
				int b = *( (arr2 + k*col2) +j);
				
				*(*(MultMatrix + i)+j) +=  a * b; // same as MultMatrix[i][j] += arr1[i][j] * arr2[j][i];
			}
				
		}
	}	
	
	return MultMatrix;
}

int main()
{
	int arr1[][3] = {1,2,3,4,5,6};
	int arr2[][3] = {2,3,4,1,2,3,1,1,0};
	int row1 = 2;
	int col1 = 3;

	int row2 = 3;
	int col2 = 3;

	int** MultMatrix = MarixMultiplication((int*)arr1,(int*)arr2,row1,col1,row2,col2);
	
	if(MultMatrix == MEMERR)
	{	
		printf("Error : Memory not available");
		exit(0);
	}
	else if(MultMatrix == (int**)MATRIXERR)
	{
		printf("Error : Matrix A column is not equal to Matrix B row ");
		exit(0);
	}
	
	for(int i = 0 ; i < row1 ; i++)
	{
		for(int j = 0 ; j < col1 ; j++)
		{
			printf(" %d ",MultMatrix[i][j] );
		}
		printf("\n");
	}


	return 0;
}
