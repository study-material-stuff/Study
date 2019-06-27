#include <iostream>

using namespace std;

class Base
{
	private:
		int z ;

	protected:
		int y ;		
		
	public :
		int x ;
	 
	Base()
	{
		x = 1;
		y = 2;
		z = 3;
	} 

};

class Derived : protected Base
{
	public :

	Derived()
	{
		cout << x << endl;  
		cout << y << endl;
//		cout << z << endl; // not allowed private
	} 

};

class Derived2 : protected Derived
{
	public :

	Derived2()
	{
		cout << x << endl;  
		cout << y << endl;
//		cout << z << endl; // not allowed private
	} 

};

int main()
{
	Derived2 obj;

		cout << sizeof(obj) << endl; 
//		cout << obj.x << endl;  
//		cout << obj.y << endl; // not allowed protected
//		cout << obj.z << endl; // not allowed private
	
	return 0;
}
