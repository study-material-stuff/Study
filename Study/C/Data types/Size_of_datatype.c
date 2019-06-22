#include<stdio.h>

int main()
{

	///	Size of datatypes

	int iNo = 10;
	char ch = 'A';
	float fNo = 10.0;
	double dNo = 10.0;
	
	printf("Size of int : %ld \n",sizeof(iNo));    // 4
	printf("Size of char : %ld \n",sizeof(ch));    // 1
	printf("Size of float : %ld \n",sizeof(fNo));  // 4 
	printf("Size of double : %ld \n",sizeof(dNo)); // 8
	printf("Size of void : %ld \n",sizeof(void));  // 1

	///	Size of pointers

	int* Iptr = NULL;
	char* Cptr = NULL;
	float* Fptr = NULL;
	double* Dptr = NULL;
	void* Vptr = NULL; 
	
	printf("\n\n");
	printf("Size of int* : %ld \n",sizeof(Iptr));     // 8
	printf("Size of char* : %ld \n",sizeof(Cptr));    // 8
	printf("Size of float* : %ld \n",sizeof(Fptr));   // 8 
	printf("Size of double* : %ld \n",sizeof(Dptr));  // 8
	printf("Size of void* : %ld \n",sizeof(Vptr));    // 8

	/// size of modifiers

	
	short int siNo = 10;
	long int liNo = 10;
	//long char sch = 'A';     // error
	//long float sfNo = 10.0;  // error
	//short char sch = 'A';     // error
	//short float sfNo = 10.0;  // error


	long double ldNo = 10.0; 

	printf("\n\n");
	printf("Size of short int : %ld \n",sizeof(siNo));    // 2
	printf("Size of long int : %ld \n",sizeof(liNo));    // 8
	printf("Size of long double : %ld \n",sizeof(ldNo));    // 16
	
	long lno = 10;
	short sno = 10;

	printf("\n\n");
	printf("Size of long  : %ld \n",sizeof(lno));    // 8
	printf("Size of long : %ld \n",sizeof(sno));    // 16

	

	return 0;

}
