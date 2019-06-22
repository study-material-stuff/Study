#3. Write a program which contains one class named as Arithmetic.
#Arithmetic class contains three instance variables as Value1 ,Value2.
#Inside init method initialise all instance variables to 0.
#There are three instance methods inside class as Accept(), Addition(), Subtraction(),
#Multiplication(), Division().
#Accept method will accept value of Value1 and Value2 from user.
#Addition() method will perform addition of Value1 ,Value2 and return result.
#Subtraction() method will perform subtraction of Value1 ,Value2 and return result.
#Multiplication() method will perform multiplication of Value1 ,Value2 and return result.
#Division() method will perform division of Value1 ,Value2 and return result.
#After designing the above class call all instance methods by creating multiple objects.

class Arithmetic:
	
	def __init__(self):
		self.no1 = 0.0;
		self.no2 = 0.0;
		
	def Accept(self):
		self.no1 = float(input("Enter the no1 : "));
		self.no2 = float(input("Enter the no2 : "));

	def Add(self):
		return self.no1 + self.no2;

	def Sub(self):
		return self.no1 - self.no2;

	def Mult(self):
		return self.no1 * self.no2;

	def Div(self):
		return self.no1 / self.no2;


    
obj1 = Arithmetic();
obj1.Accept();
print("Addition is :",obj1.Add());
print("Subtraction is :",obj1.Sub());
print("Multiplication is :",obj1.Mult());
print("Diision is :",obj1.Div());

