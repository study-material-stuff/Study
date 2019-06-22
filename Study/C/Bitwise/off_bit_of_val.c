#include<stdio.h>

// make the bit of val to 0 acccording to the bits of keys

int Offbit(int val , int key)
{	
	return val & ~key;
}

int main()
{
	int val , key ;
	
	printf("Enter the value \n");
	scanf("%d",&val);

	printf("Enter the key \n");
	scanf("%d",&key);

	int ans = Offbit(val,key);
	
	printf("\nAnswer :  %d \n",ans);
	
	return 0;
}
