#5. Accept file name and one string from user and return the frequency of that string from file.

import sys;

def Accept():
	filename = sys.argv[1];
	string = sys.argv[2];
	return filename,string;


def FindFrequency(filename,string): # counts the frequency of string without searching 
	fd = open(filename,"r");
	filecontent = fd.read();
	split = filecontent.split(string);

	filesplit = "";
	for x in split:
		filesplit+=x;
	
	length1 = len(filecontent);
	length2 = len(filesplit);
	stringlength = len(string);

	lenght3 = length1 - length2;

	return int(lenght3 / stringlength);


def FindFrequency(filename,string):
	fd = open(filename,"r");
	filecontent = fd.read();
	return filecontent.count(string);

filename,string = Accept();


print("Frequency of the string {} is {}".format(string,FindFrequency(filename,string)));

