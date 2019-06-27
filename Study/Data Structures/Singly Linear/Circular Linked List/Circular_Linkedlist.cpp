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
		PNODE tail;
	
	public :
		List();
		bool InsertFirst(int data);
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
		head == NULL;
		tail == NULL;
	}

	bool List :: InsertFirst(int data)
	{
		PNODE node = NULL;	
		node =  new NODE;
		
		if(node == NULL)
		{
			return false;
		}

		node -> data = data;
		node -> next = NULL;
		
		if(head == NULL || tail == NULL)
		{
			head = node;
			tail = node;
			node -> next = head;				
		}
		else
		{
			node -> next = head;
			head = node;
			tail -> next = head;
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
		
		if(head == NULL || tail == NULL)
		{
			head = node;
			tail = node;
			node -> next = head;
		}
		else
		{
			tail -> next = node;
			node -> next = head;
			tail = node;
		}

		return true;
	}	

	bool List :: InsertAtPos(int pos , int data)
	{
		int iCnt = Count();
		
		if(pos == 1)
		{
			return InsertFirst(data);
		}
		else if(pos == iCnt + 1)
		{
			return InsertLast(data);
		}
		else if(pos <= 0 || pos > iCnt + 1)
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
		
		iCnt = 0;
		PNODE temp = head;
	
		while(iCnt != pos - 2)
		{
			iCnt++;
			temp = temp -> next;
		}

		node -> next = temp -> next;
		temp -> next = node;
		
		return true;
	}

	bool List :: DeleteFirst()
	{

		if(head == NULL || tail == NULL)
		{
			return false;
		}
	
		PNODE temp = head;

		if(head -> next == head)	
		{
			head = NULL;		
			tail = NULL;
		}
		else
		{
			head = head -> next;
			tail -> next = head;
		}

		delete temp;

		return true;
	}

	bool List :: DeleteLast()
	{
		if(head == NULL || tail == NULL)
		{
			return false;
		}

		PNODE temp1 = head;
		PNODE temp2 = tail;
 
		while(temp1 -> next != tail)
		{
			temp1 = temp1 -> next;
		}
		
		if(head -> next == head)
		{
			head = NULL;
			tail = NULL;
		}
		else
		{
			temp1 -> next = head;
			tail = temp1;
		}

		delete temp2;
		
		return true;		
	}

	bool List :: DeleteAtPos(int pos)
	{
		int iCnt = Count();
		
		if(pos == 1)
		{
			return DeleteFirst();
		}
		else if(pos == iCnt)
		{
			return DeleteLast();
		}
		else if(pos <= 0 || pos > iCnt)
		{
			return false;
		}

		iCnt = 0;
		PNODE temp1 = head;
		PNODE temp2 = NULL;
			
		while(iCnt != pos - 2)
		{
			iCnt++;
			temp1 = temp1 -> next;			
		}

		temp2 = temp1 -> next;
		temp1 -> next = temp2 -> next;
		
		delete temp2;
	
		return true;
	}

	void List :: Display()
	{
		if(head == NULL || tail == NULL)
		{
			return;
		}

		PNODE temp = head;

		do
		{	
			cout << temp -> data << endl;
			temp = temp -> next;
		}	
		while(temp != tail -> next);
	}

	int List :: Count()
	{
		if(head == NULL || tail == NULL)
		{
			return 0;
		}

		PNODE temp = head;
		int i = 0;
		do
		{	
			i++;
			temp = temp -> next;
		}	
		while(temp != tail -> next);
		
		return i;
	}
	
	List :: ~List()
	{
		int cnt = Count();

		for(int i = 0 ; i < cnt ; i++)
		{
			DeleteFirst();			
		}

	}


int main()
{
	List *obj = new List;
	int i = 0;

	while(i != 5)
	{
		obj -> InsertLast(i);
		obj -> InsertFirst(i);
		i++;
	}
	obj -> Display();

	delete obj;
	return 0;

}
