#5. Accept string from user and return average of ascii value of characters from that string.
#Input : “ABCDE”
#Output : 67 ((65+66+67+68+69)/5)

def Avg(str):
	sum = 0;
	for s in str:
		sum += ord(s);
	return int(sum/len(str));


str = input("Enter the string : ");
print(Avg(str));

