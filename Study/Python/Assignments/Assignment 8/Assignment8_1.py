#1.Design python application which creates two thread named as even and odd. Even
#thread will display first 10 even numbers and odd thread will display first 10 odd
#numbers.

import threading;

def DispEven(number):
	num = 0;
	for no in range(number):
		num += 2;
		print("Even number = ",num);
		

def DispOdd(number):
	num = 0;
	for no in range(number):
		num += 2;
		print("Odd number = ",num-1);


number = 10;

thread1 = threading.Thread(target = DispEven,args=(number,));

thread2 = threading.Thread(target = DispOdd,args=(number,));

thread1.start();
thread2.start();