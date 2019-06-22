#4.Write a program which accept N numbers from user and store it into List. Accept one another
#number from user and return frequency of that number from List.

listobj = list();

def Accept():
	print("Enter how many numbers");
	num = input();

	for i in range(0,int(num)):
		no = int(input("num : "));
		listobj.append(no);


def Minium(list,no):
	icnt = 0;
	for num in list:
		if(num == no):
			icnt += 1;		
	return icnt;


Accept();
no = int(input("Enter no :"));
print(Minium(listobj,no));
