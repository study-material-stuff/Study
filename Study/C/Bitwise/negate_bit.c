#include<stdio.h>

// negates particular bit ie 0 -> 1 OR 1 -> 0

int setbit(int iNo , int bit)
{
	int temp = 1 << (bit - 1);
	iNo = iNo ^ temp;
	return iNo;
}

int main()
{
	int iNo , bit ;
	
	printf("Enter the number \n");
	scanf("%d",&iNo);

	printf("Enter the bit \n");
	scanf("%d",&bit);

	int ans = setbit(iNo,bit);
	
	printf("%d",ans);
	
	return 0;
}
