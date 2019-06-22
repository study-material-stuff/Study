#4.Design python application which creates three threads as small, capital, digits. All the
#threads accepts string as parameter. Small thread display number of small characters,
#capital thread display number of capital characters and digits thread display number of
#digits. Display id and name of each thread.

import threading;

def small(str):
	cnt = 0;
	for s in str:
		if(s.islower()):
			cnt += 1;
	print("Thread id = ",threading.get_ident());
	print("Thread Name ",threading.current_thread().name);
	print("Count of small letters is = ",cnt);


def capital(str):
	cnt = 0;
	for s in str:
		if(s.isupper()):
			cnt += 1;
	print("Thread id = ",threading.get_ident());
	print("Thread Name ",threading.current_thread().name);
	print("Count of capital letters is = ",cnt);


def digit(str):
	cnt = 0;
	for s in str:
		if(s.isdigit()):
			cnt += 1;
	print("Thread id = ",threading.get_ident());
	print("Thread Name ",threading.current_thread().name);
	print("Count of digit letters is = ",cnt);



string = "harshal123GHULE";



thread1 = threading.Thread(target = small , args=(string,));
thread2 = threading.Thread(target = capital , args=(string,));
thread3 = threading.Thread(target = digit , args=(string,));


thread1.start();
thread2.start();
thread3.start();

print("Main Thread id = ",threading.get_ident());
print("Main Thread Name ",threading.current_thread().name);

