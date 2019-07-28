#include <stdio.h>

void Swap(int a,int b)
{
	a += b;
	b = a - b;
	a = a - b;
	
	printf("a = %d , b = %d",a,b);
}

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;

	printf("Enter a and b ");
	scanf("%d",&iNo1);
	scanf("%d",&iNo2);

	Swap(iNo1 ,iNo2);	

}
