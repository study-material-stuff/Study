#include <iostream>
using namespace std;

class Demo
{
	public :
		Demo();
		Demo(int,int);
		void fun();
		~Demo();		
};

	Demo :: Demo()
	{
		cout << "Default Constructor" << endl;
	}

	Demo :: Demo(int a, int b)
	{
		cout << "Parameterised Constructor" << endl;
	}
	
	void Demo :: fun()
	{
		cout << "Inside fun" << endl;
	}

	Demo :: ~Demo()
	{
		cout << "Destructor" << endl;
	}


int main()
{
	Demo *obj = (Demo*) malloc(sizeof(Demo));
	obj -> fun(); // Inside fun
	free(obj);

	Demo *Obj1 = new Demo(); // Default Constructor
	Obj1 -> fun();  // Inside fun
	delete Obj1; // Destructor
	
	Demo *Obj2 = new Demo(10,20); // Parameterised Constructor
	Obj2 -> fun();  // Inside fun
	delete Obj2; // Destructor

	return 0;
}
