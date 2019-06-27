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

class Derived : public Base
{
	public :
		int x , y;

	Derived()
	{
		cout << "Derived Constuctor" << endl;
	} 

	~Derived()
	{
		cout << "Derived Destructor" << endl;
	}
};

int main()
{
	Derived obj2;

	cout << sizeof(obj2) << endl;

	return 0;
}
