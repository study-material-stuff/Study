#include <stdio.h>
#include <malloc.h>	
#include <string.h>
#define TRUE 1
#define FALSE 0
#define MAXSIZE 256

typedef int BOOL;

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

char* LargestPalindrome(char* string)
{
	int MaxLen = 0;
	char* str = NULL;
	char* str2 = NULL;

	int Len = strlen(string);
	char* left = string;
	char* right = string+(Len-1);

	
	for(int i = 0 ; i < Len ; )
	{
		do
		{
			right--;
			
		}while( (*right != *left) && (right > left) );

		
			if(*right == *left)
			{
				str = (char*) malloc ( (right-left +1) * sizeof(char) );
				for(int j = 0 ; j < (right-left +1) ; j++ )
				{
					str[j] = left[j];
					str[j+1] = '\0';
				} 
				
				if(Palindrome(str) && MaxLen < strlen(str))
				{
				
					str2 = str;	
					MaxLen = strlen(str);
				}
				else
				{
					free(str);
					str = NULL;	
				}
			}
			else
			{
				break;
			}
			
		
			if(left == right)
			{
				right = string+(Len-1);
				left++;
				i++;
			}

	}

	return str2;
}


int main()
{
	char* a = "madamharshalabcdeffedcbaharshalmadam";

	char* cAns = LargestPalindrome(a);
	printf("\n String => %s",cAns);
	printf("\n Length => %ld \n",strlen(cAns));
		
}
