#include <iostream>
using namespace std;

typedef struct node NODE;
typedef struct node* PNODE; 

struct node
{
	int data;
	PNODE prev;
	PNODE next;
};

class List
{
	private : 
		PNODE head;

	public:
		int length;

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
		length = 0;
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
		node -> prev = NULL;

		if(head == NULL)
		{
			head = node;
		}
		else
		{
			node -> next = head;
			head -> prev = node;
			head = node;
		}
		length++;
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
		node -> prev = NULL;

		PNODE temp = head;

		if(head == NULL)	
		{
			head = node;
		}
		else
		{
			while(temp -> next != NULL)
			{
				temp = temp -> next;
			}				
		
			node -> prev = temp;
			temp -> next = node;
		}

		length++;
		return true;
	}


	bool List :: InsertAtPos(int pos , int data)
	{
		int Cnt = length;
		
		if(pos == 1)
		{
			return InsertFirst(data);
		}
		else if(pos== Cnt + 1)
		{
			return InsertLast(data);
		}
		else if(pos <= 0 || pos > Cnt + 1)
		{
			return false;
		}
		
		PNODE node = NULL;
		PNODE temp = head;
		node = new NODE;
		
		if(node == NULL)
		{
			return false;
		}	
		
		node -> data = data;
		node -> next = NULL;
		node -> prev = NULL;

		Cnt = 0;
		
		while(Cnt != pos - 2)
		{
			Cnt++;
			temp = temp -> next;		
		}	

		node -> next = temp -> next;
		temp -> next -> prev = node;
		temp -> next = node;
		node -> prev = temp;
		
		length++;
		return true;	
	}


	bool List :: DeleteFirst()
	{
		
		if(head == NULL)
		{
			return false;
		}
		
		PNODE temp = head;		
	
		if(head -> next != NULL)
		{
			head -> next -> prev = NULL;
			head = head -> next;
		}
		else
		{
			head = NULL;
		}

		free(temp);
		
		length--;		
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

		if(head -> next != NULL)
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
			temp2 = head;
			head = NULL;		
		}

		free(temp2);

		length--;
		return true;
	}	

	bool List :: DeleteAtPos(int pos)
	{
		int Cnt = length;
		
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

		Cnt = 0;	
	
		PNODE temp1 = head;
		PNODE temp2 = NULL;
		
		while(Cnt != pos - 2)
		{
			Cnt++;
			temp1 = temp1 -> next;
		}
		
		temp2 = temp1 -> next;
		temp2 -> next -> prev = temp1;
		temp1 -> next = temp2 -> next;
		
		free(temp2);		
		
		length--;
		return true;
	}	

	void List :: Display()
	{
		PNODE temp = head;
		
		while(temp != NULL)
		{
			cout << temp -> data << endl;
			temp = temp -> next;
		}
	}
	
	int List :: Count()
	{
		int iCnt = 0;
		
			PNODE temp = head;
			
			while(temp != NULL)
			{
				iCnt++;
				temp = temp -> next;
			}

		return iCnt;
	}

		List :: ~List()
		{}



int main()
{

	List* obj = NULL;
	obj = new List;

	obj -> InsertLast(11);
	obj -> InsertLast(21);
	obj -> InsertLast(51);
	obj -> InsertLast(101);
	obj -> InsertLast(121);
	obj -> InsertLast(11);
	obj -> InsertLast(21);
	obj -> InsertLast(51);
	obj -> InsertLast(101);
	obj -> InsertLast(121);
	obj -> InsertLast(11);
	obj -> InsertLast(21);
	obj -> InsertLast(51);
	obj -> InsertLast(101);
	obj -> InsertLast(121);
	
	obj -> DeleteAtPos(10);	
	
	obj -> Display();

	cout << "\n\n\n" <<endl;

	cout << "Count : " << obj -> length  <<endl;
	cout << "Count Fun : " << obj -> Count()  <<endl;
	
	

	delete obj;
	return 0;
}
