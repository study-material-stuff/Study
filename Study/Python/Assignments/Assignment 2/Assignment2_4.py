def AddFactors(num):
	sum = 0;
	for x in range(1,int(num/2)+1):
		if(num % x == 0):
			sum = sum + x;
	return sum;

num = int(input("Enter the num"));

print(AddFactors(num));
		
	