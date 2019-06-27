#include <stdio.h>
#include <malloc.h>

#define TRUE 1
#define FALSE 0

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
typedef int BOOL;

// Node Structure

struct node
{
	int data;
	PNODE next;
};

// Function Declaration

BOOL InsertAtFirst(PPNODE,int);
BOOL InsertAtLast(PPNODE,int);
BOOL InsertAtPos(PPNODE,int,int);
BOOL DeleteAtFirst(PPNODE);
BOOL DeleteAtLast(PPNODE);
BOOL DeleteAtPos(PPNODE,int);
void Display(PNODE);
int Count(PNODE first);


BOOL InsertAtFirst(PPNODE first,int data)
{
	PNODE node = NULL;
	
	node = (PNODE) malloc (sizeof(NODE)); 
	
	if(node == NULL)
	{
		return FALSE;
	}
	
	node -> data = data;
	node -> next = NULL;

	if(*first != NULL)
	{
		node -> next = *first;
	}

	*first = node;

	return TRUE;	
}

BOOL InsertAtLast(PPNODE first,int data)
{
	PNODE node = NULL;
	PNODE temp = *first;
	
	node = (PNODE) malloc(sizeof(NODE));

	if(node == NULL)
	{
		return FALSE;
	}
	
	node -> data = data;
	node -> next = NULL;

	if(*first == NULL)
	{
		*first = node;		
	}
	else
	{
		while(temp -> next != NULL)
		{			
			temp = temp -> next;
		}
		
		temp -> next = node;
	}	
	
	return TRUE; 

}	

BOOL InsertAtPos(PPNODE first,int pos,int data)
{
	if(pos == 1)
	{
		return InsertAtFirst(first,data);
	}
	else if(pos == Count(*first) + 1 )
	{
		return InsertAtLast(first,data);
	}
	else if(pos <= 0 || pos > Count(*first) + 1)
	{
		return FALSE;
	}

	PNODE node = NULL;
	node = (PNODE) malloc(sizeof(NODE));
	
	if(node == NULL)
	{
		return FALSE;
	}

	node -> data = data;
	node -> next = NULL;		
	
	PNODE temp = *first;	
	
	for(int i = 0 ; i < pos-2 ; i++)
	{
		temp = temp -> next;
	}
	
	node -> next = temp -> next;
	temp -> next = node;

	return TRUE;
}

BOOL DeleteAtFirst(PPNODE first)
{
	if(*first == NULL)
	{
		return FALSE;
	}
		
	PNODE temp = *first;
	*first = temp -> next;
	free(temp); 
	return TRUE;
}

BOOL DeleteAtLast(PPNODE first)
{
	PNODE temp = *first;

	if(*first == NULL)
	{
		return FALSE;
	}
	else if( temp -> next == NULL)
	{
		return DeleteAtFirst(first);
	}
 
	while(temp -> next -> next != NULL)
	{
		temp = temp -> next;
	}
	
	free(temp -> next);
	temp -> next = NULL;

	return TRUE;
}

BOOL DeleteAtPos(PPNODE first,int pos)
{
	int Cnt = Count(*first);
	
	if(pos == 1)
	{
		return DeleteAtFirst(first);
	}
	else if(pos == Cnt)
	{
		return DeleteAtLast(first);
	}
	else if(pos <= 0 || pos > Cnt)
	{
		return FALSE;
	}

	PNODE temp1 = *first;
	PNODE temp2 = NULL;
	int iCnt = 1;

	while(iCnt != pos - 2)
	{
		iCnt++;
		temp1 = temp1 -> next;
	}
	
	temp2 = temp1 -> next -> next;
	temp1 -> next -> next = temp2 -> next;
	free(temp2);

	return TRUE;
}

void Display(PNODE first)
{
	while( first != NULL )
	{
		printf("%d \n",first -> data);
		first = first -> next;
	}
}

int Count(PNODE first)
{
	int i = 0;
	
	while(first != NULL)
	{
		first = first -> next;
		i++;
	}
	
	return i;
}

int main()
{
	PNODE head = NULL;

	InsertAtFirst(&head,11);
	InsertAtFirst(&head,21);
	InsertAtFirst(&head,51);
	InsertAtPos(&head,1,10);
	InsertAtPos(&head,2,20);
	InsertAtPos(&head,3,30);
	
	Display(head);
	
	DeleteAtPos(&head,1);
	
	printf("\n\n\n");	

	Display(head);
	return 0;
}
