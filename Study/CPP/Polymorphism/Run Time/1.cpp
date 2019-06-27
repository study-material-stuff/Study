#include <iostream>

using namespace std;

class Base
{
	public :
		int i , j;
		
		void fun()
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


int main()
{
	Base bobj;
	Derieved dobj;

//	bobj.fun();	// Base Fun
//	bobj.gun();	// Base Gun
		
//	dobj.fun();	// Derirved Fun
//	dobj.gun();	// Derirved Gun

	Base *bp = NULL;
	Derieved *dp = NULL;
	
//	bp = &bobj;
//	bp -> fun(); // Base Fun
//	bp -> gun(); // Base Gun

//	dp = &dobj;
//	dp -> fun(); // Derirved Fun
//	dp -> gun(); // Derirved Gun

//	bp = &dobj;
//	bp -> fun(); // Base Fun
//	bp -> gun(); // Base Gun	 


//	dp = (Derieved *) &bobj; 
//	dp -> fun(); // Derirved Fun
//	dp -> gun(); // Derirved Gun

//	Base &bref = bobj;
//	bref.fun();  // Base Fun
//	bref.gun();	 // Base Gun

//	Derieved &dref = dobj;
//	dref.fun(); // Derirved Fun
//	dref.gun(); // Derirved Gun


	Base &bref1 = dobj;
	bref1.fun();  // Base Fun
	bref1.gun();	 // Base Gun


	Derieved &bref2 = (Derieved&) bobj;
	bref2.fun();  // Derieved Fun
	bref2.gun();	 // Derieved Gun

return 0;
}	
