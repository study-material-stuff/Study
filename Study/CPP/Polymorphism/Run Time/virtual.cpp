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
	
};

class Derieved : public Base
{
	public :
		int k;
	
	    void fun()
		{
			cout << "Derieved Fun" << endl;
		}	

		void gun()
		{
			cout << "Derieved Gun" << endl;
		}
		
};

/*
class Derieved1 : public Derieved
{
	public :
		int k;
	
		virtual void fun()
		{
			cout << "Derieved1 Fun" << endl;
		}	

		void gun()
		{
			cout << "Derieved Gun" << endl;
		}
}; 


*/
int main()
{
	Base bobj;
	Derieved dobj;

	Base *bp = NULL;
	Derieved *dp = NULL;
	
	bp = &dobj;
//	bp -> fun(); // Derieved Fun
//	bp -> gun(); // Base Gun	 


	dp = (Derieved *) &bobj; 
	dp -> fun(); // Derirved Fun
	dp -> gun(); // Derirved Gun

//	Base &bref = bobj;
//	bref.fun();  // Base Fun
//	bref.gun();	 // Base Gun

//	Derieved &dref = dobj;
//	dref.fun(); // Derirved Fun
//	dref.gun(); // Derirved Gun


//	Base &bref1 = dobj;
//	bref1.fun();  // Base Fun
//	bref1.gun();	 // Base Gun


//	Derieved &bref2 = (Derieved&) bobj;
//	bref2.fun();  // Derieved Fun
//	bref2.gun();	 // Derieved Gun

return 0;
}	
