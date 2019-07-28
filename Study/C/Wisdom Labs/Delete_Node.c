#include <stdio.h>
#include <malloc.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

BOOL DeleteFirst(PPNODE first);
BOOL InsertFirst(PPNODE first,int data);
struct node
{
	int data;
	PNODE next;
};

BOOL InsertFirst(PPNODE first,int data)
{
	PNODE node = NULL;
	node = (PNODE) malloc (sizeof(NODE));
	
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
		node -> next = *first;
		*first = node;
	}

	return TRUE;
}

BOOL DeleteFirst(PPNODE first)
{
	PNODE temp = *first;
	
	if(*first == NULL)
	{
		return FALSE;	
	}

	if((*first) -> next != NULL)
	{
		*first = (*first) -> next;
	}
	else
	{
		*first = NULL;	
	}
	
	free(temp);

	return TRUE;
}


void Display(PNODE first)
{
	while(first != NULL)
	{
		printf("\n data = %d ",first -> data);
		first = first -> next;
	}
}

int main()
{
	PNODE head = NULL;

	InsertFirst(&head , 11);
	InsertFirst(&head , 21);
	InsertFirst(&head , 31);
	InsertFirst(&head , 41);
	InsertFirst(&head , 51);

	Display(head);

	DeleteFirst(&head);
	DeleteFirst(&head);
	DeleteFirst(&head);
	DeleteFirst(&head);
	DeleteFirst(&head);
	DeleteFirst(&head);
	
	Display(head);			
}
