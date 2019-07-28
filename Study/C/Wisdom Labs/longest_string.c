#include <stdio.h>
#include <stdlib.h>

char* Longest_String(char* str)
{
	char* cptr = NULL;
	int iCnt = 0;
	int index = 0;
	int i = 0;
		
	while(str[i] != '\0')	
	{
		int temp = 0;
		
		while( (str[i] != ' ') && (str[i] != '\0') )
		{
			temp++;	
			i++;
		}

		if(iCnt < temp)
		{
			iCnt = temp;
			index = i-iCnt;								
		}

		i++;
	}
	
	cptr = (char*) malloc (iCnt * sizeof(char));
	
	for(i = 0 ; i < iCnt ; i++)
	{
		cptr[i] = str[index++];	
	}

	return cptr;
}

int main()
{
	char* str = "dd f il;ydaiyhfishighuai shiughi fdssssss";

	char* cPtr = Longest_String(str);
	
	printf("\n\n Longest string =>  %s \n\n",cPtr);
	
}
