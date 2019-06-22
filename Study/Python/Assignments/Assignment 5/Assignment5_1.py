#1.Write a program which contains one function that accepts string from user and return reverse
#of that string.
#Input : “Marvellous Pune”
#Output : “enuP suollevraM”

def reverse(s): 
  str = "" 
  for i in s: 
    str = i + str
  return str

def reverse2(string):
	string = "".join(reversed(string)) 
	return string 


str = input("Enter the string : ");
print(reverse(str));
