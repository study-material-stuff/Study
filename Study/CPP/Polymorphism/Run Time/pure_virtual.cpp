#include <iostream>

using namespace std;

class Base
{
	public :
		int i , j;
		
		virtual void fun()
		{
			cout << "Base Fun" << endl;
		}	

		void gun()
		{
			cout << "Base Gun" << endl;
		}
	
		virtual void run() = 0;
	
};

class Derieved : public Base
{
	public :
		int k;
	
		virtual void fun()
		{
			cout << "Derieved Fun" << endl;
		}	

		void gun()
		{
			cout << "Derieved Gun" << endl;
		}
		
		void run()
		{
			cout << "Derieved Run" << endl;
		} 
};

int main()
{
	//Base bobj;
	Derieved dobj;

	Base* bp = &dobj;
	bp -> gun(); 
	
}	
