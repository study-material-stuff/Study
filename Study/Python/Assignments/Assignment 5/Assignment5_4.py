#4.Write a program which contains one function that accepts string and one position from user.
#Remove the character from that position.
#Input : “ABCDEFGHIJK” Position : 5
#Output : “ABCDEGHIJK”

def RemoveCharAt(str,pos):
	string = "";
	i = 0;
	while(i != len(str)):
		if(i != pos):
			string += str[i];
		i += 1;
	return string;

str = input("Enter the string : ");
pos = int(input("Enter the position : "));
print(RemoveCharAt(str,pos));



		

