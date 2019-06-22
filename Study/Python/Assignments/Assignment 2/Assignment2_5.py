def ChkPrime(num):
	ret = True;
	for x in range(2,int(num/2)+1):
		if(num % x == 0):
			ret = False;
			break;
	return ret;

num = int(input("Enter the num"));

if(ChkPrime(num)):
	print(num ," is Prime Number");
else:
	print(num ,"is not Prime Number");
