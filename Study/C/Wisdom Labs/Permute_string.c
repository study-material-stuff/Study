#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAXSIZE 256

void swap(char* a , char* b)
{
	char temp ;

	temp = *a;
	*a = *b;
	*b = temp; 
}

void Permute(char* str,int left , int right)
{
	static int cnt = 0;
	cnt++;
	
	if(left == right)
	{
		//printf("\n %s",str);
		printf("\n %d",cnt);
	}		
	else
	{
		for(int i = left ; i <= right ; i++)
		{
			swap(str+left , str + i);
			Permute(str , left + 1 , right );
			swap(str+left , str + i);
		}
	}
}

int main()
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	
	Permute(str,0,strlen(str)-1);
	
}
