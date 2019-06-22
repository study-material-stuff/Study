#3.Write a program which accept file name from user and create new file named as Demo.txt and
#copy all contents from existing file into new file. Accept file name through command line
#arguments.

import sys; # for command line argument
import os;  # for method exists();

def Accept():
	filename = sys.argv[1];
	return filename;

def Copy(filename):

	defaultFileName = ChkFileExists(filename);
	fd1 = open(filename,"r");
	fd2 = open(defaultFileName,"x");
	fd2.write(fd1.read());
	
	if(os.path.exists(defaultFileName)):
		print("file coppied succefully");
	else:
		print("file not coppied !");

	fd1.close();
	fd2.close();

def ChkFileExists(filename,cnt = 0):		

	if(not os.path.exists(filename)):
		return filename;
	elif("_Copy" not in filename):	
		a = filename.split('.');
		newfilename = a[0] + "_Copy." + a[1]; 
		filename = newfilename;
	else:
		a = filename.split('_Copy');
		b = filename.split('.');
		newfilename = a[0] + "_Copy_" + str(cnt) +"."+ b[1];
		filename = newfilename;		
	cnt += 1;
	return ChkFileExists(filename,cnt);


filename = Accept();
Copy(filename);




