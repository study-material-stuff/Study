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

	for(int i = 2 ; i <= iNo/2 ; i++)
	{
		if(iNo % i == 0)
		{
			bRet = FALSE;
			break;
		}
	}

	return bRet;
}

void Prime_range(int iNo1,int iNo2)
{
	for(int i = iNo1 ; i <= iNo2 ; i++)
	{
		if(Prime(i))
		{
			printf("\n %d ",i);
		}
	}

}

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;

	printf("Enter the range from a to b");
	scanf("%d",&iNo1);
	scanf("%d",&iNo2);
	
	Prime_range(iNo1,iNo2);
	
}
