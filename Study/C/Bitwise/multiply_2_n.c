#include<stdio.h>

// negates the bit of val acccording to the bits of keys

int raised_to(int num , int n)
{	
	return num << n;
}

int main()
{
	int num , n ;
	
	printf("Enter the number \n");
	scanf("%d",&num);

	printf("Enter the n \n");
	scanf("%d",&n);

	int ans = raised_to(num , n);
	
	printf("\nAnswer :  %d \n",ans);
	
	return 0;
}
