#include <stdio.h>

void display(int row , int col , int arr[][7] )
{
	int Start = 0;
	int End_row = row-1;
	int End_col = col-1;
	int i = 0;
	int j = 0;
		
	int loop = 0;
	int Max = 0 ;
	
	if(row > col)
	{
		Max = (End_row/2);
	}
	else
	{
		Max = (End_col/2);
	}

	while( loop != Max )
	{	
		loop++;	
		i = Start;
	
		for(j = Start ; j <= End_col ; j++)
		{	
			printf(" %d \n",arr[i][j]);
		}	

		for(i = Start + 1, j = End_col;  i <= End_row ; i++)
		{
			printf(" %d \n",arr[i][j]);
		}


		for(j = End_col-1 , i = End_row ; j >= Start ; j--)	
		{
			printf(" %d \n",arr[i][j]);
		}

		for(i = End_row - 1 , j = Start ; i > Start ; i--)
		{	
			printf(" %d \n",arr[i][j]);
		}
	
	
		Start++;
		End_row--;
		End_col--;

	
	}

		
	

}


int main()
{
	int arr[][7] = { {1,2,3,4,5,6,7}, {8,9,10,11,12,13,14} ,{15,16,17,18,19,20,21} , {22,23,24,25,26,27,28} , {29,30,31,32,33,34,35}};
	display(5,7,arr);

	return 0;
}
