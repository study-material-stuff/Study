#include<stdio.h>

// sets the bit of val to 1 acccording to the bits of keys 

int setbit(int val , int key)
{	
	return val | key;
}

int main()
{
	int val , key ;
	
	printf("Enter the value \n");
	scanf("%d",&val);

	printf("Enter the key \n");
	scanf("%d",&key);

	int ans = setbit(val,key);
	
	printf("\nAnswer :  %d \n",ans);
	
	return 0;
}
