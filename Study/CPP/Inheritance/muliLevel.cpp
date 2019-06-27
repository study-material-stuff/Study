#include <iostream>

using namespace std;

class Base
{
	public :
		int i , j;

	Base()
	{
		cout << "Base Constuctor" << endl;
	} 

	~Base()
	{
		cout << "Base Destructor" << endl;
	} 
	
};

class Derived1 : public Base
{
	public :
		int x,y;

	Derived1()
	{
		cout << "Derived 1 Constuctor" << endl;
	} 

	~Derived1()
	{
		cout << "Derived 1 Destructor" << endl;
	}
};

class Derived2 : public Derived1
{
	public :
		int p,q;

	Derived2()
	{
		cout << "Derived 2 Constuctor" << endl;
	} 

	~Derived2()
	{
		cout << "Derived 2 Destructor" << endl;
	}
};

int main()
{
	Derived2 obj2;
	
	cout << sizeof(obj2) << endl;

	return 0;
}
