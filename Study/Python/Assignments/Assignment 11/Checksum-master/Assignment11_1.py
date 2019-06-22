#1.Design automation script which accept directory name and display checksum of all files.
#Usage : DirectoryChecksum.py “Demo”
#Demo is name of directory.

import datetime;
from sys import *;
import ChecksumFunctionalityModule as module;

def CreateOutput(FileName,dictionary):
	
	data = "File Checksum :\n\n";
	
	for Key, Value in dictionary.items(): 
		data += Key +" : "+ str(Value) +"\n\n"


	defaultFileName = module.ChkFileExists(FileName +"_Output.txt");

	fd = open(defaultFileName,"x");
	fd.write(data);
	fd.close();


def main():
	if  len(argv) != 2:
		print("Invalid number arguments");
		exit();

	if (argv[1] == "-h") or (argv[1] == "-H"):
		print("\n\n\t\t........................This is FileSystem Automation........................\n\n");
		print("\n " + argv[0]+ " -h For Help");
		print("\n " + argv[0]+ " -u For Usage");		
		exit();

	if (argv[1] == "-u") or (argv[1] == "-U"):
		print("\n <Usage> " + argv[0]+ " Directory_Name");
		exit();

	try:
		DirName = argv[1];

		dictionary = module.GetChecksum(DirName);
		CreateOutput(argv[0],dictionary);
		
	except Exception as E:
		fd = open("Error_Log.txt",'a');
		logmsg = "\n\n Error :  "+ str(E) + "\n Log Time " + str(datetime.datetime.now()) +"\n\n";
		fd.write(logmsg);
		fd.close();

if(__name__ == "__main__"):
	main();