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

		Demo& operator +()
		{
			return *this;			
		}
		
		Demo operator -()
		{
			return Demo(-i , -j);			
		}
			
		Demo& operator ++()
		{
			i++;
			j++;
			return *this;
		}
		
		Demo operator ++(int)
		{
			Demo temp(i,j);
			i++;
			j++;
			return temp;
		}	
};

int main()
{
	Demo obj1(0,0);
	Demo obj2(10,10);
	
	obj1 = obj2++;
	cout << obj1.i << " " << obj1.j << endl;
	cout << obj2.i << " " << obj2.j << endl;

	return 0;	
}

