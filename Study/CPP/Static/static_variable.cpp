#include <iostream>
using namespace std;

class Demo
{
	public :
		int i , j;
		static int k; // Declaration of static

		Demo();
		void fun();
};

	int Demo :: k = 0; // Defination of static variable

	Demo :: Demo()
	{
		i = 0;
		j = 0;
	}

	void Demo :: fun()
	{
		cout << i << endl;
		cout << j << endl;
		cout << k << endl << endl;
	}


int main()
{
	Demo obj1;
	Demo obj2;
	
	obj1.i++;
	obj1.j++;
	obj1.k++;	

	obj1.fun();
	obj2.fun();

//	cout << sizeof(obj1) << endl;
//	cout << obj1.i << endl;
	return 0;
}
