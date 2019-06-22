#2.Design python application which creates two threads as evenfactor and oddfactor.
#Both the thread accept one parameter as integer. Evenfactor thread will display
#addition of even factors of given number and oddfactor will display addition of odd
#factors of given number. After execution of both the thread gets completed main
#thread should display message as “exit from main”.
import threading;

def EvenFactor(number):
	sum = 0;
	for no in range(1,int(number / 2)+1):
		if(number % no == 0):
			if(no % 2 == 0):
				sum += no;

	print("Addition of Even factors is ", sum);


def OddFactor(number):
	sum = 0;
	for no in range(1,int(number / 2)+1):
		if(number % no == 0):
			if(no % 2 != 0):
				sum += no;

	print("Addition of Odd factors is ", sum);

number = 10;

thread1 = threading.Thread(target = EvenFactor,args=(number,));

thread2 = threading.Thread(target = OddFactor,args=(number,));

thread1.start();
thread2.start();

thread1.join();
thread2.join();

print("exit from main");