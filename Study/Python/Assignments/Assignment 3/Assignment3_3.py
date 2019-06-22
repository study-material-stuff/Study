#2.Write a program which accept N numbers from user and store it into List. Return Minium
#number from that List.
import sys;

listobj = list();

def Accept():
	print("Enter how many numbers");
	num = input();

	for i in range(0,int(num)):
		no = int(input("num : "));
		listobj.append(no);


def Minium(list):
	sum = sys.maxsize;
	for num in list:
		if(sum > num):
			sum = num;		
	return sum;


Accept();
print(Minium(listobj));
