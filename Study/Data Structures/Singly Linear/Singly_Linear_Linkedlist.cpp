#include <iostream>

using namespace std;

typedef struct node NODE;
typedef struct node* PNODE;

struct node
{
	int data;
	PNODE next;	
};

class List
{
	private : 
		PNODE head;
		PNODE last;
	public :
		List();
		bool InsertFirst(int);
		bool InsertLast(int);
		bool InsertAtPos(int,int);
		bool DeleteFirst();
		bool DeleteLast();
		bool DeleteAtPos(int);
		void Display();
		int Count();
		~List();
};

	List :: List()
	{
		head = NULL;
		last = NULL;
	} 
	
	bool List :: InsertFirst(int data)
	{
		PNODE node = NULL;
		
		node = new NODE;

		if(node == NULL)
		{
			return false;
		}
	
		node -> data = data;
		node -> next = NULL;	

		if(head == NULL)
		{
			head = node;
			last = node;					
		}
		else
		{			
			node -> next = head;
			head = node;
		}
		
		return true;
	}
	
	bool List :: InsertLast(int data)
	{
		PNODE node = NULL;
		
		node = new NODE;

		if(node == NULL)
		{
			return false;
		}
	
		node -> data = data;
		node -> next = NULL;	

		if(head == NULL)
		{
			head = node;
			last = node;					
		}
		else
		{
			last -> next = node;	
			last = node;
		}		
		
		return true;
	}

	bool List :: InsertAtPos(int pos,int data)
	{
		int Cnt = Count();

		if(pos == 1)
		{
			return InsertFirst(data);	
		}
		else if(pos == Cnt + 1)
		{
			return InsertLast(data);
		}
		else if(pos <= 0 || pos > Cnt + 1)
		{
			return false;
		}
		
		PNODE node = NULL;
		
		node = new NODE;

		if(node == NULL)
		{
			return false;
		}
	
		node -> data = data;
		node -> next = NULL;

		int iCnt = 0;
		PNODE temp = head; 
		
		while(iCnt != pos - 2)
		{
			temp = temp -> next;
			iCnt++;
		}
		
		node -> next = temp -> next;
		temp -> next = node;

		return true;
	}

	bool List :: DeleteFirst()
	{
		if(head == NULL)
		{
			return false;
		}

		PNODE temp = head;
		head = head -> next;
		delete temp;

		
		return true;
	}

	bool List :: DeleteLast()
	{
		if(head == NULL)
		{
			return false;
		}

		PNODE temp1 = head;
		PNODE temp2 = NULL;

		if(temp1 -> next == NULL)
		{
			return DeleteFirst();
		}
			
		while(temp1 -> next -> next != NULL)
		{
			temp1 = temp1 -> next;
		}		
	
		temp2 = temp1 -> next;
		temp1 -> next = temp2 -> next;
		delete temp2;			
				
	
		return true;
	}

	bool List :: DeleteAtPos(int pos)
	{
		int Cnt = Count();

		if(pos == 1)
		{
			return DeleteFirst();
		}
		else if(pos == Cnt)
		{
			return DeleteLast();
		}
		else if(pos <= 0 || pos > Cnt)
		{
			return false;
		}
		
		int iCnt = 0;	
		PNODE temp1 = head;		
		PNODE temp2 = NULL;

		while(iCnt != pos - 2)
		{
			temp1 = temp1 -> next;
			iCnt++;
		}
		
		temp2 = temp1 -> next;
		temp1 -> next = temp2 -> next;
		delete temp2;			
	
		return true;
	}

	void List :: Display()
	{
		PNODE temp = head;

		while( temp != NULL )
		{
			cout << temp -> data << endl;
			temp = temp -> next;
		}
	}

	int List :: Count()
	{	
		PNODE temp = head;
		int i = 0;
	
		while(temp != NULL)
		{
			temp = temp -> next;
			i++;
		}
	
		return i;
	}

	List :: ~List()
	{
		int Cnt = Count();
		for(int i = 0 ; i < Cnt ; i++)
		{
			DeleteFirst();		
		}
		head = NULL;
		last = NULL;
		
	}

int main()
{
	List* obj = new List;
	
	
	obj -> InsertLast(1);
	obj -> InsertLast(2);
	obj -> InsertLast(3);
	obj -> InsertLast(4);
	obj -> InsertAtPos(5,100);
	obj -> InsertAtPos(1,200);
	obj -> InsertAtPos(5,300);
	
	
	cout << endl << endl;

	
	
	obj -> Display();	

	delete obj;

	return 0;
}
