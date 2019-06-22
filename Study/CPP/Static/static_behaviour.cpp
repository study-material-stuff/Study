#include <iostream>
using namespace std;

class Demo
{
	public :
		int i , j;
		static int k; // Declaration of static

		Demo();
		void fun();
		static void gun(); 
};

	int Demo :: k = 0; // Defination of static variable

	Demo :: Demo()
	{
		i = 0;
		j = 0;
	}

	void Demo :: fun()
	{	
		cout << "Non-static behaviour " << endl;
		cout << "i :" << i << endl;
		cout << "j :" << j << endl;
		cout << "static K :" << k << endl << endl;
	}

	void Demo :: gun()
	{
		cout << "static behaviour " << endl;
		//cout << "i :" << i << endl; // not allowed
		//cout << "j :" << j << endl; // not allowed
		cout << "static K :" << k << endl << endl;
	}

int main()
{
	Demo obj;
	
	obj.i++;
	obj.j++;
	obj.k++;	

	obj.fun();

	obj.gun();

	return 0;
}
