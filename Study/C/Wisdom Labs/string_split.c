#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAXSIZE 256

typedef int BOOL;

int CntComma(char* str)
{
	int cnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ',')
		{
			cnt++;
		}
		str++;
	}

	return cnt;
}

char** Split(char* string)
{
	char** arr = NULL;
	int i = 0;
	arr = (char**) malloc ( CntComma(string) + 1 * sizeof(char*));
	char* str = NULL;
	int size = 0;

	
 
	while(*string != '\0')
	{
		if(*string != ',')
		{
			size++;
			
		}		
	}
	

	return arr;
}

int main()
{

	char str[] = "Hello , HEllo , harshal ,ugugugd ";

	char** arr = Split(str);

	for(int i = 0 ; arr[i] != NULL; i++)
	{
		printf("\n %s \n ",arr[i]);
	}
}
