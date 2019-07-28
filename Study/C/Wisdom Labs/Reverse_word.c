#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void strwrdrev(char* str)
{
	char temp ;
	char* start;
	char* end;

	if(str == NULL)
	{
		return;
	}

	while(*str != '\0')
	{
		if(*str == ' ')
		{
			while( (*str == ' ') && (*str != '\0') )
			{	
				str++;
			}
		}
		else
		{
			start = str;
		
			while( (*str != ' ') && (*str != '\0'))
			{
				str++;
			}
		
			end = str-1;

			while(start < end)
			{
				temp = *start;
				*start = *end;
				*end = temp;

				start++;
				end--;
			}
		}
	}
	
}

void Reverse_Word(char* str)
{
	char* start;
	char* end;
	char temp;

	if(str == NULL)
	{
		return ;
	}	

	while(*str != '\0')
	{								
		if(*str == ' ')
		{
			while( (*str == ' ') && (*str != '\0') )
			{
				str++;
			}
		}
		else
		{
			start = str;

			while( (*str != ' ') && (*str != '\0') )
			{
				str++;
			}	
			
			end = str-1;

			while(start < end)
			{
				temp = *end;
				*end = *start;  
				*start = temp;
				
				start++;
				end--;
			}						
		}
	}

}

int main()
{
	char str[] = "Hello I am Harshal";

	Reverse_Word(str);
	
	printf("\n\n Reversed words i a string =>  %s \n\n",str);
	
	
}
