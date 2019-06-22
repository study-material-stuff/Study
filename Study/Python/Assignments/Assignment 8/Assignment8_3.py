#Design python application which creates two threads as evenlist and oddlist. Both the
#threads accept list of integers as parameter. Evenlist thread add all even elements
#from input list and display the addition. Oddlist thread add all odd elements from input
#list and display the addition.

import threading;
import functools;

def Accept():
	listobj = list();
	print("Enter how many numbers");
	num = input();

	for i in range(0,int(num)):
		no = int(input("num : "));
		listobj.append(no);
	return listobj;

def SumOfEven(inptlist):
	evenlist = list(filter(lambda no : (no % 2 == 0),inputlist));
	sum = functools.reduce(lambda a,b : a + b,evenlist);
	print(sum);	

def SumOfOdd(inptlist):
	evenlist = list(filter(lambda no : (no % 2 != 0),inputlist));
	sum = functools.reduce(lambda a,b : a + b,evenlist);
	print(sum);		


inputlist = Accept();


thread1 = threading.Thread(target = SumOfEven,args=(inputlist,));

thread2 = threading.Thread(target = SumOfOdd,args=(inputlist,));

thread1.start();
thread2.start();