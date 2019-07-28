#include <stdio.h>
#include <malloc.h>	
#include <string.h>
#define TRUE 1
#define FALSE 0
#define MAXSIZE 256

typedef int BOOL;


BOOL ChkPal(char* string , int start , int end)
{
	if(start == end)
	{
		return TRUE;
	}

	if(string[start] != string[end])
	{
		return FALSE;
	}
	
	if(start < end)
	{
		return ChkPal(string,start+1,end-1);
	}

	return TRUE;
}

BOOL Palindrome(char *string)
{
	int Len = strlen(string);
	BOOL bRet = TRUE;
	char* left = string;	
	char* right = string + Len-1;

	for (int i = 0 ; i < (Len/2) ; i++)
	{
		if(*left != *right)
		{
			bRet = FALSE;
			break;
		}
		right--;
		left++;						
	}
	
	return bRet;
}

void LargestPal(char* string)
{
	int Len = strlen(string);
	char* start = string;
	char* end = string + (Len-1);
	char temp ;
	int Max = 0;
	


	for(int i = 0 ; i < Len ; )
	{
		do
		{
			end--;
		}
		while( (*start != *end) && (start < end)); 
		

		if(*start == *end)
		{
			temp = *(end+1);
			*(end+1) = '\0';

			
	
			if(Max < strlen(start))
			{
				if(Palindrome(start))
				{
					Max = strlen(start);
					printf("\n Largest str = %s \n",start);
					printf("Len = %d",Max);
				}					
			}		
			*(end+1) = temp;
		}
		else
		{
			break;
		}
		
		
		if(start == end)
		{
			start++;
			i++;
			end = string + (Len-1);
		}
		

	}
	 
}

int main()
{
	char str[] = "abamadamaba";

	LargestPal(str);
		
}
