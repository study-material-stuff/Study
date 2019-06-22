#2.Write a program which contains one function that accepts string from user and return number
#of words from that string.
#Input : “Marvellous Infosystems by Piyush Khairnar”
#Output : 5

def words(str):
	icnt = 1;

	for s in str:
		if(s == " "):
			icnt += 1;
	return icnt;


str = input("Enter the string : ");
print(words(str));
