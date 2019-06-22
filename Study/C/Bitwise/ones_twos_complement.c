#include<stdio.h>

// ones and twos complement of a number 

int ones_complement(int iNo)
{
	return ~iNo;
}

int twos_complement(int iNo)
{
	return (ones_complement(iNo) + 1);
}


int main()
{
	int iNo = 0;
	
	printf("Enter the number \n");
	scanf("%d",&iNo);

	printf("ones complement : %d \n",ones_complement(iNo));
	printf("twos complement : %d \n",twos_complement(iNo));
	
	return 0;
}
