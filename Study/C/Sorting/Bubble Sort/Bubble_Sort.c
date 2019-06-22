#include <stdio.h>

int* BubbleSort(int* arr,int size)
{
	int temp = 0;
	
	for(int i = 0 ; i < size - 1; i++)
	{
		for(int j = 0 ; j < size - 1 -i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}	
		
	}	
	
	return arr;
}

int main()
{
	int arr[] = {12,1,8,10,5,3};
	int size = sizeof(arr)/sizeof(int);

	int *Sorted_arr = BubbleSort(arr,size);
	
	for(int i = 0 ; i < size ; i++)
	{
		printf("\n %d \n",*(Sorted_arr+i));
	}


	return 0;
}
