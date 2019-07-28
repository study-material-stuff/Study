#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

typedef int bool;

bool isSpecial(char ch)
{
	bool bRet = false;

	if( !( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= 0 && ch <= 9) ))	
	{	
		bRet = true;
	}

	return bRet;
}

void StrRev(char* str)
{
	char* left = str;
	char* right = str + strlen(str)-1;
	char temp;

	while(left <= right)
	{
		
		if( (isSpecial(*left)) && (left < right) )
		{			
			left++;	
			continue;	
		}
		
		if( (isSpecial(*right)) && (right > left) )
		{
			right--;
			continue;
		}
		
		temp = *left;
		*left = *right;
		*right = temp;

		left++;
		right--;
		
	}	

}

int main()
{
	char str[] = "h z a @ r $ s # h ! a * l";
	
	printf("\n original string -> %s ",str );

	StrRev(str);
	
	printf("\n string reversed -> %s ",str );

	return 0;
}
