#include <stdio.h>

int equilibrium(int arr[], int n) 
{ 
    
	int i = 0 ;
	int j = n-1;

	int index = 1;
	int sum1 = 0;
	int sum2 = 0;

	if(n == 1)
	{
		return index;
	}

	do
	{
		if(i < n && j >= 0)
		{
			sum1 += arr[i];
			sum2 += arr[j];
			printf("\nsum1 -> %d",sum1);
			printf("\nsum2 -> %d",sum2);
		}
		else
		{
			break;
		}
		
		i++;
		j--;
		index++;
		printf("\nindex -> %d",index);
	}
	while(sum1 != sum2);	
		
	if(sum1 == sum2)
	{
		return index;
	}	
	

    return -1; 
}

int ChkEquilibrium(int arr[] , int length)
{

	int LeftSum = 0;
	int RightSum = 0;
	
	for(int i = 0 ; i < length ; i++)
	{
		LeftSum = 0;
		for(int j = 0 ; j < i ; j++)
		{
			LeftSum += arr[j];			
		}	

		RightSum = 0;
		for(int k = i+1 ; k < length ; k++ )
		{
			RightSum += arr[k];
		}	

		if(LeftSum == RightSum)
		{
			return i + 1;
		}
		else
		{
			LeftSum = RightSum = 0;
		}
	}

	return -1;

}


int main()
{
	int arr[] = {-7, 3, 4, 2, 4, 3, -7};
	
	int iAns = ChkEquilibrium(arr,7);

	printf("\n %d \n",iAns);

	iAns = equilibrium(arr,7) ;

	printf("\n %d \n",iAns);
	return 0;
}
