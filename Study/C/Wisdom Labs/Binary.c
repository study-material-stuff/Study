#include <stdio.h>

void Binary(int iNo)
{	
	if(iNo == 0)
	{
		return;
	}	
	Binary(iNo/2);
	printf(" %d ",iNo % 2);

}

int main()
{
	int iNo = 0;
	printf("Enter n ");
	scanf("%d",&iNo);

	Binary(iNo);	

}
