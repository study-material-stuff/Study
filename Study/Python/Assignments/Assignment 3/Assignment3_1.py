#1.Write a program which accept N numbers from user and store it into List. Return addition of all
#elements from that List.

listobj = list();

def Accept():
	print("Enter how many numbers");
	num = input();

	for i in range(0,int(num)):
		no = int(input("num : "));
		listobj.append(no);


def Addition(list):
	sum = 0;
	for num in list:
		sum +=num;
	return sum;


Accept();
print(Addition(listobj));
