def pattern(num):
	for x in range(num+1):
		for y in range(1,num - (num-x) +1) :print(y,end="  ");
		print();



no=int(input("Enter the number"));
pattern(no);
			
	