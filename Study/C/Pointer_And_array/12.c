#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6};
	int *p[] = {arr,arr+1,arr+2,arr+3,arr+4,arr+5};
	int **ptr = NULL;

	ptr = p;

	printf(" &p%d p%d *p%d",&p,p,*p);
	printf("\n\n ptr = %d ",ptr);

	/*while(ptr != NULL)
	{
		printf("%d \n",*ptr);
		ptr++;
	}
	*/
//	printf("%d",p);
}


