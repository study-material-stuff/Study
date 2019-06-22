#include <stdio.h>

int* SelectionSort(int* arr,int size)
{
	int min = 0;
	int temp = 0;

	for(int i = 0; i < size ; i++)
	{	
		min = i;

		for(int j = i+1 ; j < size ; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
		
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
		
	}
	
	return arr;
}

int main()
{
	int arr[] = {12,1,8,10,5,3};
	int size = sizeof(arr)/sizeof(int);

	int *Sorted_arr = SelectionSort(arr,size);
	
	for(int i = 0 ; i < size ; i++)
	{
		printf("\n %d \n",*(Sorted_arr+i));
	}


	return 0;
}
