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

		friend Demo& operator +(Demo& op);
		friend Demo operator -(Demo& op);
		friend Demo& operator ++(Demo& op);
		friend Demo operator ++(Demo&,int);
		friend Demo& operator --(Demo& op);
		friend Demo operator --(Demo& op,int);			
};

		Demo& operator +(Demo& op)
		{
			return op;			
		}
		
		Demo operator -(Demo& op)
		{
			return Demo(-op.i , -op.j);			
		}
		
		
		Demo& operator ++(Demo& op)
		{
			op.i++;
			op.j++;
			return op;
		}
		
		Demo operator ++(Demo& op,int)
		{
			Demo temp(op.i,op.j);
			op.i++;
			op.j++;
			return temp;
		}

		Demo& operator --(Demo& op)
		{
			op.i--;
			op.j--;
			return op;
		}
		
		Demo operator --(Demo& op,int)
		{
			Demo temp(op.i,op.j);
			op.i--;
			op.j--;
			return temp;
		}

int main()
{
	Demo obj1(0,0);
	Demo obj2(10,10);
	
	obj1 = obj2--;
	cout << obj1.i << " " << obj1.j << endl;
	cout << obj2.i << " " << obj2.j << endl;

	return 0;	
}

