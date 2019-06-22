def pattern(num):
	for x in range(num+1):
		for y in range(num-x):print("*",end=" ");
		print();



no=int(input("Enter the number"));
pattern(no);
			
	