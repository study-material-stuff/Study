#3. Write a program which contains one class named as Numbers.
#Arithmetic class contains one instance variables as Value.
#Inside init method initialise that instance variables to the value which is accepted from user.
#There are four instance methods inside class as ChkPrime(), ChkPerfect(), SumFactors(),
#Factors().
#ChkPrime() method will returns true if number is prime otherwise return false.
#ChkPerfect() method will returns true if number is perfect otherwise return false.
#Factors() method will display all factors of instance variable.
#SumFactors() method will return addition of all factors. Use this method in any another method
#as a helper method if required.
#After designing the above class call all instance methods by creating multiple objects.

class Numbers:
	
	def __init__(self,Value):
		self.Value = int(Value);

	def ChkPrime(self):
		ret = True;
		for no in range(1,int((self.Value/2))+1):
			if(self.Value % no == 0):
				ret = False;
		return ret;

	def Factors(self):
		print("Factors of the number {} is :".format(self.Value),end=" ");
		for no in range(1,int((self.Value/2))+1):
			if(self.Value % no == 0):
				print(no,end=" ");
		print();

	def SumFactors(self):
		sum = 0;
		for no in range(1,int((self.Value/2))+1):
			if(self.Value % no == 0):
				sum += no;
		return sum;

	def ChkPerfect(self):
		ret = False;
		if(self.Value == self.SumFactors()):
			ret = True;
		return ret;

		





obj = Numbers(496);
print("Is the number prime",obj.ChkPrime());
obj.Factors();
print("Sum of Factors" , obj.SumFactors());
print("Is the number perfect :" , obj.ChkPerfect());