#4.Write a program which contains filter(), map() and reduce() in it. Python application which
#contains one list of numbers. List contains the numbers which are accepted from user. Filter
#should filter out all such numbers which are even. Map function will calculate its square.
#Reduce will return addition of all that numbers.

import functools

listobj = list();

def Accept():
	print("Enter how many numbers");
	num = input();

	for i in range(0,int(num)):
		no = int(input("num : "));
		listobj.append(no);


Accept();

filterlist = list(filter(lambda no : no % 2 == 0, listobj));
print(filterlist);

maplist = list(map(lambda no : no * no,filterlist))
print(maplist);

reduced = functools.reduce(lambda a,b : a+b,maplist);
print(reduced);
