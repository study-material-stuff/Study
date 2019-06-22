def addDigits(num):
	no = 0;
	for x in range(len(str(num))):
		no = no + num%10;
		num = int(num/10);
	return no;
		




no=int(input("Enter the number"));
print(addDigits(no));