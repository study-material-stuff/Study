#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAXSIZE 256

typedef int BOOL;

int isSubstring(char* s1, char* s2) 
{ 
  	int len1 = strlen(s1);
	int len2 = strlen(s2);  
  
	for(int i = 0 ; i < (len2 - len1) ; i++)
	{
		int j;

		for(j = 0 ; j < len1 ; j++)
		{
			if(s2[i+j] != s1[j])
			{
				break;			
			}		 
		}		
				
		if(j == len1)
		{
			return i;
		}

	}

    return -1; 
} 

void substring(char *str)
{
	int Len = strlen(str);
	char* left = str;
	char* right = str + (Len - 1);
	char* temp = NULL;

	for(int i = 0 ; i < Len ; )
	{
		
		while(right != left)
		{
			
			temp =(char*) malloc ((right - left) * sizeof(char));
		
			for(int j = 0 ; j <= (right - left) ; j++)
			{
				temp[j] = left[j];
			}			
			
			printf("\nstring -> %s",temp);
			
			if(temp != NULL)
			{	
				free(temp);
				temp = NULL;
			}
			right--;
		}		
	
		if(left == right)
		{
			printf("\nstring -> %c",left[0]);
			left++;
			right = str + (Len - 1);
			i++;
		}
	}

}

void substr(char* string)
{
	
	int loop = 0;
	int Len = strlen(string);
	

	while(1)
	{

		for(int i = 0;  i < Len ; i++)	
		{
			for(int j = i ;  j <= (loop + i ) ; j++)
			{
				printf("%c",string[j]);
			}
			printf("\n");
		}

		Len--;	
		loop++;

		if(loop == strlen(string))
		{
			break;
		}

	}
}

int main()
{
	char* str = "abc";
	char* str2 = "harshalabcharshal";
	
	substr(str);
	
}
