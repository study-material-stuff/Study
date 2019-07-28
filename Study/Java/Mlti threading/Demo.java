
class Mythread extends Thread
{
	int iNo;
	
	public Mythread()
	{
		iNo = 10;
	}	
	
	public void run()
	{
		synchronized(this)
		{			
			for(int i = 0 ; i < 20 ; i++)
			{			
				System.out.println(" Thread Name " + Thread.currentThread().getName() + " i => "+ i);
			}
		}	
	}

}


class Demo
{
	public static void main(String arg[])
	{
		Thread obj[] = new Thread[10];
		Mythread tobj = new Mythread(); 
	
		for(int i = 0  ; i < 10 ; i++)
		{	
			obj[i] = new Thread(tobj);
			obj[i].setName("Thread "+ i);	
			obj[i].start();
		}


		
	}
}
