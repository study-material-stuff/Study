#include <stdio.h>
#include <malloc.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


struct node
{
	int data;
	PNODE next;
	PNODE prev;
};

BOOL InsertFirst(PPNODE,int);
BOOL InsertLast(PPNODE,int);
BOOL InsertAtPos(PPNODE,int,int);
BOOL DeleteFirst(PPNODE);
BOOL DeleteLast(PPNODE);
BOOL DeleteAtPos(PPNODE,int);

void Display(PNODE);
int Count(PNODE);

BOOL InsertFirst(PPNODE first , int data)
{
	PNODE node = NULL;
	node = (PNODE) malloc(sizeof(NODE));
	
	if(node == NULL)
	{
		return FALSE;
	}

	node -> data = data;
	node -> next = NULL;
	node -> prev = NULL;

	if(*first == NULL)
	{
		*first = node;
	}
	else
	{
		node -> next = *first;
		(*first) -> prev = node;
		*first = node;
	}
	
	return TRUE;
}

BOOL InsertLast(PPNODE first,int data)
{
	PNODE node = NULL;
	node = (PNODE) malloc(sizeof(NODE));
	
	if(node == NULL)
	{
		return FALSE;
	}

	node -> data = data;
	node -> prev = NULL;
	node -> next = NULL;

	PNODE temp = *first;

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
		node -> prev = temp;
	}
	
	return TRUE;
}

int InsertAtPos(PPNODE first , int pos , int data)
{
	int Cnt = Count(*first);
	
	if(pos == 1)
	{
		return InsertFirst(first,data);
	}
	else if(pos == Cnt + 1)
	{
		return InsertLast(first,data);
	}
	else if(pos <= 0 || pos > Cnt + 1)
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
	node -> prev = NULL;
	node -> next = NULL;
	
	Cnt = 0;
	PNODE temp = *first;

	while(Cnt != pos - 2)
	{
		temp = temp -> next;
		Cnt++;
	}		
	
	node -> next = temp -> next;
	node -> prev = temp;
	temp -> next -> prev = node;
	temp -> next = node;

	return TRUE;
}

BOOL DeleteFirst(PPNODE first)
{
	PNODE temp = *first;

	if(*first == NULL)	
	{
		return FALSE;
	}	
	
	if((*first) -> next != NULL )
	{	
		*first = (*first) -> next;
		(*first) -> prev = NULL;
	}
	else
	{
		*first = NULL;	
	}

	free(temp);

	return TRUE;
}

BOOL DeleteLast(PPNODE first)
{
	PNODE temp1 = *first;
	PNODE temp2 = NULL;

	if(*first == NULL)	
	{
		return FALSE;
	}

	if(temp1 -> next != NULL)
	{
		while(temp1 -> next -> next != NULL)
		{
		temp1 = temp1 -> next;
		}

		temp2 = temp1 -> next;
		temp1 -> next = NULL;	
	}
	else
	{
		temp2 = *first;
		*first = NULL;
	}
	
	free(temp2);
	
	
	return TRUE;
}



void Display(PNODE first)
{
	while(first != NULL)
	{
		printf("\n %d ",first -> data);
		first = first -> next;
	}
}

int Count(PNODE first)
{
	int iCnt = 0;

	while(first != NULL)
	{
		iCnt++;		
		first = first -> next;
	}

	return iCnt;
}

BOOL DeleteAtPos(PPNODE first , int pos)
{	
	int Cnt =  Count(*first);

	if(pos == 1)
	{
		return DeleteFirst(first);
	}	
	else if(pos == Cnt)
	{
		return DeleteLast(first);
	}
	else if(pos <= 0 || pos > Cnt)
	{
		return FALSE;
	}

	PNODE temp1 = *first;
	PNODE temp2 = NULL;
	Cnt = 0;
	
	while(Cnt != pos - 2)
	{
		temp1 = temp1 -> next;
		Cnt++;
	} 
	
	temp2 = temp1 -> next;
	temp2 -> next -> prev = temp1;
	temp1 -> next = temp2 -> next;
	
	free(temp2);
	
	return TRUE;
}

int main()
{
	PNODE head = NULL;
	
	InsertLast(&head,1);
	InsertLast(&head,2);
	InsertLast(&head,3);
	InsertLast(&head,4);
	InsertLast(&head,5);
	InsertAtPos(&head,1,100);
	InsertAtPos(&head,7,100);
	InsertAtPos(&head,4,100);

	Display(head);

	printf("\n\n\n");

	DeleteAtPos(&head,1);
	DeleteAtPos(&head,7);
	DeleteAtPos(&head,4);
	
	
	Display(head);

	return 0;
}
