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

BOOL InsertFirst(PPNODE,PPNODE,int);
BOOL InsertLast(PPNODE,PPNODE,int);
BOOL InsertAtPos(PPNODE,PPNODE,int,int);
BOOL DeleteFirst(PPNODE,PPNODE);
BOOL DeleteLast(PPNODE,PPNODE);
BOOL DeleteAtPos(PPNODE,PPNODE,int);
void Display(PNODE,PNODE);
int Count(PNODE,PNODE);

BOOL InsertFirst(PPNODE first , PPNODE last ,int data)
{
	PNODE node = NULL;
	node = (PNODE) malloc(sizeof(NODE));

	if(node == NULL)
	{
		return FALSE;
	}
	
	node -> data = data;
	node -> next = NULL;

	if(*first == NULL && *last == NULL)
	{
		*first = node;
		*last = node;
		node -> next = *first; 
	}
	else
	{
		node -> next = *first;
		*first = node;
		(*last) -> next = *first;		
	}

	return TRUE;
}

BOOL InsertLast(PPNODE first, PPNODE last , int data)
{
	PNODE node = NULL;
	node = (PNODE) malloc(sizeof(NODE));

	if(node == NULL)
	{
		return FALSE;
	}
	
	node -> data = data;
	node -> next = NULL;

	if(*first == NULL && *last == NULL)
	{
		*first = node;
		*last = node;
		node -> next = *first;
	}
	else
	{
		(*last) -> next = node;
		node -> next = *first;
		*last = node;
	}


	return TRUE;
}

BOOL InsertAtPos(PPNODE first , PPNODE last , int pos ,int data)
{
	int Cnt = Count(*first,*last);

	if(pos == 1)
	{
		return InsertFirst(first,last,data);
	}
	else if(pos == Cnt + 1)
	{
		return InsertLast(first,last,data);
	}
	else if(pos <= 0 || pos > Cnt + 1)
	{
		return FALSE;
	}

	PNODE node = (PNODE) malloc(sizeof(NODE));
	
	if(node == NULL)
	{
		return FALSE;
	}	

	Cnt = 0;
	node -> data = data;
	PNODE temp = *first;

	while(Cnt != pos - 2)
	{
		temp = temp -> next;
		Cnt++;	
	}

	node -> next = temp -> next; 
	temp -> next = node;

	return TRUE;
}

BOOL DeleteFirst(PPNODE first ,PPNODE last)
{
	if(*first == NULL || *last == NULL)
	{
		return FALSE;
	}
	
	PNODE temp = *first;
	
	if((*first) -> next == *first)
	{
		*first = NULL;
		*last = NULL;		
	}
	else
	{
		*first = (*first) -> next;	
		(*last) -> next = *first;
	}
	
	free(temp);
	
	return TRUE;
}

BOOL DeleteLast(PPNODE first ,PPNODE last)	
{
	if(*first == NULL || *last == NULL)
	{
		return FALSE;
	}

	PNODE temp1 = *first;
	PNODE temp2 = *last;

	while(temp1 -> next != *last)
	{
		temp1 = temp1 -> next;
	}	

	if((*first) -> next == *first)
	{
		*first = NULL;		
		*last = NULL;
	}
	else
	{		
		temp1 -> next = *first;
		*last = temp1;
	}

	free(temp2);
	return TRUE;
}

BOOL DeleteAtPos(PPNODE first,PPNODE last,int pos)
{
	int Cnt = Count(*first,*last);

	if(pos == 1)
	{
		return DeleteFirst(first,last);
	}
	else if(pos == Cnt)
	{
		return DeleteLast(first,last);
	}
	else if(pos <= 0 || pos > Cnt)
	{
		return FALSE;
	}

	Cnt = 0;
	PNODE temp1 = *first;
	PNODE temp2 = NULL;
	
	while(Cnt != pos - 2)
	{
		temp1 = temp1 -> next;
		Cnt++;
	}

	temp2 = temp1 -> next;
	temp1 -> next = temp2 -> next;
	
	free(temp2);
	
	return TRUE;
}

void Display(PNODE head, PNODE tail)
{
	if(head == NULL || tail == NULL)
	{
		return;
	}
	
	do
	{
		printf("\n %d ",head -> data);
		head = head -> next;		
	}
	while(head != (tail -> next));
}

int Count(PNODE head , PNODE tail)
{
	int i = 0;

	do 
	{
		i++;
		head = head -> next;
	}
	while(head != (tail -> next));

	return i;
}

int main()
{
	PNODE head = NULL;
	PNODE tail = NULL;

	InsertLast(&head , &tail ,1);
	InsertLast(&head , &tail ,2);
	InsertLast(&head , &tail ,3);

	Display(head,tail);	

//	DeleteFirst(&head,&tail);
//	DeleteFirst(&head,&tail);
//	DeleteFirst(&head,&tail);
//	DeleteFirst(&head,&tail);

	DeleteLast(&head,&tail);
	DeleteLast(&head,&tail);
	DeleteLast(&head,&tail);	
		DeleteLast(&head,&tail);

	printf("\n\n\n\n");	

	Display(head,tail);
		
	return 0;
}
