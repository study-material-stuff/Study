#include <iostream>
using namespace std;

class Demo
{
	int *arr;
	int num;

	public :
		Demo();
		Demo(int[],int);
		void fun();
		~Demo();		
};

	Demo :: Demo()
	{
		cout << "Default Constructor" << endl;
		arr = NULL;
		num = 0;
	}

	Demo :: Demo(int arr[],int num)
	{
		cout << "Parameterised Constructor" << endl;
		this -> num = num;		
		this -> arr = new int[num];

		for(int i = 0 ; i < num ; i++ ) 
		{
			this -> arr[i] = arr[i];
		}
		
	}
	
	void Demo :: fun()
	{
		for(int i = 0 ; i < num ; i++)
		{
			cout << arr[i] << endl;
		}
	}

	Demo :: ~Demo()
	{
		cout << "Destructor" << endl;
		delete[] arr;
	}


int main()
{
	int arr[] = {10,20,30,40,50,60,70,80,90,100};
	
	Demo *obj = new Demo(arr,sizeof(arr)/sizeof(int));
	obj -> fun();
	delete obj;

	return 0;
}
