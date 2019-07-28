

class Demo
{
	public static void main(String arg[])
	{
	
		try
		{
			System.out.println("in try");			
			int no = 1/0;
			
		}
		catch(Exception e)
		{
			System.out.println("in catch");
			return;
		}
		finally
		{
			System.out.println("in finally");
		}
		
	}
}
