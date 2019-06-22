#4.Write a program which accept two file names from user and compare contents of both the
#files. If both the files contains same contents then display success otherwise display failure.
#Accept names of both the files from command line.
import filecmp;
import sys;

def Accept():
	filename1 = sys.argv[1];
	filename2 = sys.argv[2];
	return filename1,filename2;

def Compare(file1,file2):
	if(filecmp.cmp(file1,file2)):
		print("Success");
	else:
		print("Failure");



filename1,filename2 = Accept();
Compare(filename1,filename2);