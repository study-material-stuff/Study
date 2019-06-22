def Fact(num):
	if(num <= 1):
		return num;
	else:
		return num * Fact(num-1);


num = int(input("Enter the num1"));

print(Fact(num));