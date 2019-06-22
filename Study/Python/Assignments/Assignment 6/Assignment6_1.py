#1.Write a program which contains one class named as Demo.
#Demo class contains two instance variables as no1 ,no2.
#That class contains one class variable as Value.
#There are two instance methods of class as Fun and Gun which displays values of instance
#variables.
#Initialise instance variable in init method by accepting the values from user.
#After creating the class create the two objects of Demo class as
#Obj1 = Demo(11,21)
#Obj2 = Demo(51,101)
#Now call the instance methods as
#Obj1.Fun()
#Obj2.Fun()
#Obj1.Gun()
#Obj2.Gun()

class Demo:
	Value = 0;

	def __init__(self,no1,no2):
		self.no1 = no1;
		self.no2 = no2;

	def fun(self):
		print("Inside fun");
		print(self.no1);
		print(self.no2);
		print(self.Value);

	def gun(self):
		print("Inside gun");
		print(self.no1);
		print(self.no2);
		print(self.Value);


no1 = int(input("Enter no1 :"));
no2 = int(input("Enter no2 :"));
value = int(input("Enter value :"));

Demo.Value = value;

obj1 = Demo(no1,no2);
obj1.fun();
obj1.gun();

no1 = int(input("Enter no1 :"));
no2 = int(input("Enter no2 :"));
value = int(input("Enter value :"));

obj2 = Demo(no1,no2);
obj2.fun();
obj2.gun();
