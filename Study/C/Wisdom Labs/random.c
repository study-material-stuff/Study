#include <stdio.h>
#include <time.h>


int Rand(int min,int max)
{
	time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    int sec = tm -> tm_sec;

	sec = (sec * max) % max;

	if(! (sec >= min && sec <= max))
	{
		sec = (min + max)/2;	
	}
	
	return sec ;
}

int main()
{
	int iNo1 = 0;
	
	int iNo2 = 0;

	printf("Enter min and max ");
	scanf("%d",&iNo1);
	scanf("%d",&iNo2);

	for(int i = 0 ; i < 100 ; i++)
	printf(" %d ",Rand(iNo1 ,iNo2));	

}
