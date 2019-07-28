#include<stdio.h>

// negates the bit of val acccording to the bits of keys
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL fun(int num)
{
	BOOL bRet = TRUE;
	
	if(num & 1)
	{
		return FALSE;
	}
   
	for(int i = 0 ; i < 32 ; i=i+2 )
	{
		if(num & (1  << i))
		{
			bRet = FALSE;
			break;
		}
	}

	return bRet;
	
}	

int checksum(int arr[],int size)
{
	BOOL bNum = FALSE;
	int iNo = 0;	
	int iSum = 0;
	
	for(int i = 0 ; i < size ; i++)
	{
		if(arr[i] == -1)	
		{
			iNo = arr[i-1];
			
			while(TRUE)
			{												
				bNum = fun(iNo);
				if(bNum)
				{
					break;
				}
				iNo++;
			}
			arr[i] = iNo;
		}
		iSum += arr[i];
		bNum = FALSE;
		printf("\n\n %d ",arr[i]);
		
	}
	
	return iSum;
}

int main()
{
	int arr[8] = {1,5,-1,25,-1,7,35,-1};
	
	int iAns = checksum(arr,8);
		
	printf("\n\n %d ",iAns);
	//printf("\n\n %d ",fun(26));
	return 0;
}
