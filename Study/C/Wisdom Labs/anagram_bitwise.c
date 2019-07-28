#include <stdio.h>
#include <string.h>
#include <stdlib.h>

	
#define TRUE 1
#define FALSE 0
#define MAXSIZE 256

typedef int BOOL;

char* ToLower(char* string)
{
	char* Cptr = NULL;
	char* str = malloc(strlen(string) * sizeof(char));
	Cptr = string;
	int i = 0;	

	while(*Cptr != '\0')
	{
		if(*Cptr <= 'Z' && *Cptr >= 'A')
		{
			str[i] = *Cptr + 32;			
		}
		else
		{
			str[i] = *Cptr;
		}
		i++;
		Cptr++;	
	}
	
	return str;	
}

int Anagram(char *str1 , char *str2)
{
	BOOL bRet = TRUE;
	int value = 0;
	
	if(strlen(str1) != strlen(str2))
	{
		bRet = FALSE;
		return bRet;
	}	
	
	for(int i = 0 ; i < strlen(str1) ; i++)	
	{
		value ^= str1[i];
		value ^= str2[i]; 
	}

	return value == 0;

}

int main()
{

	if( Anagram(ToLower("CAT"),ToLower("cat")) )
	{
		printf("The String is anagram");
	}
	else
	{
		printf("The String is not anagram");
	}
		
}
