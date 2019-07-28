#include <stdio.h>

int CalBounce(float height)
{
	int bounce = 0;

	while((int)height > 0)
	{
		height = height - (height * 0.1);
		bounce++;
		printf("\n%f",height);

	}

	return bounce;
}

int main()
{
	float fHeight = 0;

	printf("Enter the heigt ");
	scanf("%f",&fHeight);

	int iAns = CalBounce(fHeight);

	printf("Bounces = %d",iAns);
	
}
