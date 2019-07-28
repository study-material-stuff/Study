


class Base
{
	Base()
	{
		System.out.println("Base");
	}
	
	static
	{
		System.out.println("Static Base");
	}

	{
		System.out.println("instance Base");
	}
}

class Derieved extends Base
{	
	static
	{
		System.out.println("Static Derieved");
	}
	
	{
		System.out.println("instance Derieved");
	}


	Derieved()
	{
		System.out.println("Derieved");
	}
}

class Demo
{
	public static void main(String args[])
	{
		Derieved d = new Derieved();
	}
}

