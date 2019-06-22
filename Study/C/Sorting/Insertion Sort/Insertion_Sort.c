#include <stdio.h>

int* InsertionSort(int* arr,int size)
{
	int current = 0;
	int j = 0;

	for(int i = 1 ; i < size ; i++)
	{
		if(arr[i] < arr[i-1])
		{
			j = i-1;
			current = arr[i];
			
			while(current < arr[j])
			{
				arr[j+1] = arr[j]; 
				j--;	
			}
			arr[j+1] = current;
		}	
	}
	return arr;
}

int main()
{
	int arr[] = {12,1,8,10,5,3};
	int size = sizeof(arr)/sizeof(int);

	int *Sorted_arr = InsertionSort(arr,size);
	
	for(int i = 0 ; i < size ; i++)
	{
		printf("\n %d \n",*(Sorted_arr+i));
	}


	return 0;
}
