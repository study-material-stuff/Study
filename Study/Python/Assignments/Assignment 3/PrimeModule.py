def ChkPrime(num):
	ret = True;
	for no in range(2,int(num/2)+1):
		if(num % no == 0):
			ret = False;
	return ret;

def Addition(num1 , num2):
	return num1 + num2;
