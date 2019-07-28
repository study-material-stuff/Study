#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define MAXSIZE 256

typedef int BOOL;

int Anagram(char *str1 , char *str2)
{
	BOOL bRet = TRUE;
	int count1[MAXSIZE] = {0};
	int count2[MAXSIZE] = {0};
	
	if(strlen(str1) != strlen(str2))
	{
		bRet = FALSE;
		return bRet;
	}	
	
	for(int i = 0 ; i < strlen(str1) ; i++)	
	{
		count1 [ str1 [i] ]++;
		count2 [ str2 [i] ]++; 
	}

	for(int i = 0 ; i < MAXSIZE ; i++)	
	{
		if(count1[i] != count2[i] )
		{
			bRet = FALSE;
			break;
		}
	}

	return bRet;

}

int main()
{

	if( Anagram("catwww","atcsss") )
	{
		printf("The String is anagram");
	}
	else
	{
		printf("The String is not anagram");
	}
		
}
