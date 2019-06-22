#5.Design python application which contains two threads named as thread1 and thread2.
#Thread1 display 1 to 50 on screen and thread2 display 50 to 1 in reverse order on
#screen. After execution of thread1 gets completed then schedule thread2.

import threading;

def DispNumbers():
	for no in range(1,51):
		print(no);

def DispReverseNumbers():
	for no in range(50,0,-1):
		print(no);




thread1 = threading.Thread(target = DispNumbers );
thread2 = threading.Thread(target = DispReverseNumbers);

thread1.start();
thread1.join();
thread2.start();