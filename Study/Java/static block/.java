import java.lang.*;

class Base
{

	{
		System.out.println("Init1");
	}
	static 
	{
		System.out.println("static1");
	}
	{
		System.out.println("Init2");
	}
	static
	{
		System.out.println("static2");
	}
	public int Add(int a , int b)
	{
		System.out.println("Base Method");
		return a+b;				
	}
}

class Derieved extends Base
{
	public int Add(int a , int b)
	{
		System.out.println("Deriieved method");		
		return a+b;				
	}
}



class Demo
{

	public static void main(String args[])
	{
		Base bref=new Base();
	
	}

	
}
