#include <iostream>

using namespace std;

class Base1	
{
	public :
		int i , j;

	Base1()
	{
		cout << "Base 1 Constuctor" << endl;
	} 

	~Base1()
	{
		cout << "Base 1 Destructor" << endl;
	} 
	
};

class Base2	
{
	public :
		int x , y;

	Base2()
	{
		cout << "Base 2 Constuctor" << endl;
	} 

	~Base2()
	{
		cout << "Base 2 Destructor" << endl;
	} 
	
};

class Derived : public Base1 , public Base2
{
	public :
		int p,q;

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
