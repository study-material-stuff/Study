#include <stdio.h>

void display(int row , int col , int arr[][7] )
{
	int Start_row = 0; 
	int Start_col = 0;
	int End_col = 0;

	while(Start_row < row && Start_col < col)
	{
		for(int i = Start_col ; i < col ; i++)
		{
			printf(" %d ",arr[Start_row][i]);
		}
	
		printf("\n");
		Start_row++;
		col--;		

		for(int i = Start_row ; i < row ; i++)
		{
			printf(" %d ",arr[i][col]);
		}
			
		printf("\n");
		row--;
		
		for(int i = col-1 ; i >= Start_col ; i--)
		{
			printf(" %d ",arr[row][i]);
		}	

		printf("\n");
		Start_col++;

		for(int i = row-1 ; i >= Start_col ; i--)
		{
			printf(" %d ",arr[i][End_col]);
		}

		End_col++;
		printf("\n");	

	
		
	}
}


int main()
{
	int arr[][7] = { {1,2,3,4,5,6,7}, {8,9,10,11,12,13,14} ,{15,16,17,18,19,20,21} , {22,23,24,25,26,27,28} , {29,30,31,32,33,34,35}};

	display(5,7,arr);

	return 0;
}
