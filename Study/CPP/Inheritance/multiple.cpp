#include <iostream>

using namespace std;

class Base1	
{
	public :
		int i , j;

	Base1()
	{
		i = 10;
		j = 10;
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
		int i , j;

	Base2()
	{
		i = 20;
		j = 20;
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
		p = 30;
		q = 30;
		Base1 :: i = 100;
		Base1 :: j = 100;
		cout << "Derived Constuctor" << endl;
	} 

	~Derived()
	{
		cout << "Derived Destructor" << endl;
	}
};

int main()
{
	Derived obj;
	

	
	cout <<obj.Base1 :: i << endl;
	cout <<obj.Base1 :: j << endl;
	cout <<obj.Base2 :: i << endl;
	cout <<obj.Base2 :: j << endl;

	return 0;
}
