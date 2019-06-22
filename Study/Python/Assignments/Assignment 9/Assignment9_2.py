#2. Write a program which accept file name from user and open that file and display the contents
#of that file on screen.

def Accept():
	return input("Enter the file name : ");

def DispFile(filename):
	fd = open(filename,"r");
	data = fd.read()
	fd.close();
	return  data;


filename = Accept();

print(DispFile(filename));