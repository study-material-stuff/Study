#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL Prime(int iNo)
{
	BOOL bRet = TRUE;

	if(iNo == 1)
	{
		return FALSE;
	}

	for(int i = 2 ; i < iNo/2 ; i++)
	{
		if(iNo % i == 0)
		{
			bRet = FALSE;
			break;
		}
	}

	return bRet;
}

int main()
{
	int iNo = 0;

	printf("Enter number");
	scanf("%d",&iNo);
	

	if(Prime(iNo))
	{
		printf("%d is prime number",iNo);
	}	
	else
	{
		printf("%d is not a prime number",iNo);
	}

}
