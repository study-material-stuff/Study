#include <iostream>
using namespace std;

class Demo
{
	private:
		int no1,no2;
	public :
		Demo();
		Demo(int);
		Demo(int,int);
		Demo(Demo&);
		void Display();
		
};

	Demo :: Demo()
	{
		cout << "Default Constructor" << endl;
		no1 = 0;
		no2 = 0;
		Display();
	}

	Demo :: Demo(int a)
	{
		cout << "Parameterised Constructor" << endl;
		no1 = a;
		no2 = a;
		Display();
	}

	Demo :: Demo(int a, int b)
	{
		cout << "Parameterised Constructor" << endl;
		no1 = a;
		no2 = b;
		Display();
	}

	Demo :: Demo(Demo &ref)
	{
		cout << "Copy Constructor" << endl;
		no1 = ref.no1;
		no2 = ref.no2;
		Display();
	}

	void Demo :: Display()
	{
		cout << "no1 :" << no1 << endl;
		cout << "no2 :" << no2 << endl;
	}

int main()
{
	Demo obj1;
	Demo obj2(10);
	Demo obj3(100,200);
	Demo obj4(obj2);

	return 0;
}
