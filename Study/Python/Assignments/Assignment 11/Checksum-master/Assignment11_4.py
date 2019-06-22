#4. Design automation script which accept directory name and delete all duplicate files from that
#directory. Write names of duplicate files from that directory into log file named as Log.txt.
#Log.txt file should be created into current directory. Display execution time required for the
#script.
#Usage : DirectoryDusplicateRemoval.py “Demo”
#Demo is name of directory.

import datetime;
from sys import *;
import ChecksumFunctionalityModule as module;
import time;

def CreateOutput(FileName,list):
	data = "Files Deleted :\n\n";
	for string in list:
		data += string;
		data += "\n";
	defaultFileName = module.ChkFileExists(FileName +"_Duplicate_File_Output.txt");

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
		starttime = time.time();
		DirName = argv[1];
		List =  module.DeleteDuplicateFiles(DirName);
		CreateOutput(argv[0],List);
		endtime = time.time();
		
		print("Execution time is %s seconds" %(endtime - starttime));
	except Exception as E:
		fd = open("Error_Log.txt",'a');
		logmsg = "\n\n Error :  "+ str(E) + "\n Log Time " + str(datetime.datetime.now()) +"\n\n";
		fd.write(logmsg);
		fd.close();

if(__name__ == "__main__"):
	main();