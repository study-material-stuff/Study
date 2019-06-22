#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5,6};
	int brr[6];

	int a = 10,b;
	
	b = a;
	
	

//	brr = arr; Error
	
	int * ptr = arr;

//	printf("%d \n %d \n %p \n %p ",*arr,*ptr,arr,ptr);

	//arr[10] = 100;
	printf("%d \n %d \n %d \n %d ",arr,&arr,arr+1,arr[10]);
	
		 
}


