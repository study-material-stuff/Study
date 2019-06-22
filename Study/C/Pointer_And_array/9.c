#include <stdio.h>

int main()
{
	int j = 11;
	int arr[] = {1.2,2.3,3.4,4.5,5,j};

	int * ptr = arr;
	
	for(int i = 0; i < 6 ; i++)
	{
		printf("%d \n",*ptr);
		ptr++;
	}
	
		 
}


