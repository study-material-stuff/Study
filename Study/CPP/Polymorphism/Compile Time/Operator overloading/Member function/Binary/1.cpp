#include <iostream>

using namespace std;

class Demo
{
	public :
		int i;
		int j;

		Demo()
		{
			i = 0;
			j = 0;
		}
		
		Demo(int i , int j)
		{
			this -> i = i;
			this -> j = j;
		}

		Demo operator +(Demo& op2)
		{
			return Demo(i + op2.i , j + op2.j);		
		}

		Demo operator -(Demo& op2)
		{
			return Demo(i - op2.i , j - op2.j);
		}
		
		Demo operator *(Demo& op2)
		{
			return Demo(i * op2.i , j * op2.j);
		}
	
		Demo operator /(Demo& op2)
		{
			return Demo(i / op2.i , j / op2.j);
		}
};

int main()
{
	Demo obj(0,0);
	Demo obj1(10,10);
	Demo obj2(2,2);
	
	obj = obj1 / obj2;

	cout << obj.i << " " << obj.j << endl;
	return 0;	
}

