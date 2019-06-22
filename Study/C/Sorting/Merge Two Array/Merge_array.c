#include <stdio.h>
#include <malloc.h>

int* MergeArray(int* arr1 ,int size1, int* arr2,int size2)
{
	int i = 0;
	int j = 0;
	int icnt = 0;
	int size = size1 + size2;
 	int* Merged_arr = NULL;

	Merged_arr = malloc(size * sizeof(int) );
	

	while(i < size1 && j < size2)
	{
		if(arr1[i] < arr2[j])
		{
			Merged_arr[icnt++] = arr1[i++]; 
		}
		else if(arr1[i] > arr2[j])
		{
			Merged_arr[icnt++] = arr2[j++]; 
		}
	}

	while(i < size1)
	{
		Merged_arr[icnt++] = arr1[i++]; 
	}
	
	while(j < size2)
	{
		Merged_arr[icnt++] = arr1[j++]; 
	}

	return Merged_arr;
}

int main()
{
	int arr1[] = {1,3,5,7,9,11,13,15,17,19,20,21,22,33,44,55,66};
	int arr2[] = {2,4,6,8,10,12,14};

	int* Merged_arr = MergeArray(arr1,sizeof(arr1)/4,arr2,sizeof(arr2)/4);
	
	
	for(int i = 0 ; i < ( (sizeof(arr2)/4) + (sizeof(arr1)/4) ) ; i++)
	{
		printf(" %d ",*(Merged_arr+i));
	}


	return 0;
}
