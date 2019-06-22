#5.Write a program which accept N numbers from user and store it into List. Return addition of all
#prime numbers from that List. Main python file accepts N numbers from user and pass each
#number to ChkPrime() function which is part of our user defined module named as
#MarvellousNum. Name of the function from main python file should be ListPrime().

import PrimeModule as math
import functools 

listobj = list();

def Accept():
	print("Enter how many numbers");
	num = input();

	for i in range(0,int(num)):
		no = int(input("num : "));
		listobj.append(no);

def Addition(num1 , num2):
	return num1 + num2;


Accept();

primelist = list(filter(math.ChkPrime , listobj));
print(primelist);
sum = functools.reduce(lambda a,b : a+b,primelist);

print(sum);
