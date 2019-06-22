#1.Write a program which accepts file name from user and check whether that file exists in
#current directory or not.

import os;

def Accept():
	return input("Enter the file name : ");


def ChkFileExists(filename):
	if(os.path.exists(filename)):
		print("File {} exists in current directory".format(filename));
	else:
		print("File {} does not exists in current directory".format(filename));

filename = Accept();
ChkFileExists(filename);