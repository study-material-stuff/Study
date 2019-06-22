#5.Write a program which contains filter(), map() and reduce() in it. Python application which
#contains one list of numbers. List contains the numbers which are accepted from user. Filter
#should filter out all prime numbers. Map function will multiply each number by 2. Reduce will
#return Maximum number from that numbers. (You can also use normal functions instead of
#lambda functions).
#Input List = [2, 70 , 11, 10, 17, 23, 31, 77]
#List after filter = [2, 11, 17, 23, 31]
#List after map = [4, 22, 34, 46, 62]
#Output of reduce = 62

import functools

listobj = list();

def Accept():
	print("Enter how many numbers");
	num = input();

	for i in range(0,int(num)):
		no = int(input("num : "));
		listobj.append(no);


def ChkPrime(num):
	ret = True;
	for no in range(2,int(num/2)+1):
		if(num % no == 0):
			ret = False;
	return ret;


def Maximum(num1 ,num2):
	ret = 0;	
	if(num1 > num2):
		ret = num1;
	else:
		ret = num2;
	return ret;

Accept();

filterlist = list(filter(ChkPrime, listobj));
print(filterlist);

maplist = list(map(lambda no : no * 2,filterlist))
print(maplist);

reduced = functools.reduce(Maximum,maplist);
print(reduced);

