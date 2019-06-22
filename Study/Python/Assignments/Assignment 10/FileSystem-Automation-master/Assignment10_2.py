#2. Design automation script which accept directory name and two file extensions from user.
#Rename all files with first file extension with the second file extenntion.
#Usage : DirectoryRename.py “Demo” “.txt” “.doc”

import datetime;
from sys import *;
import AutomationModule;

def main():
	if (len(argv) < 2) or (len(argv) > 4):
		print("Invalid number arguments");
		exit();

	if (argv[1] == "-h") or (argv[1] == "-H"):
		print("\n\n\t\t........................This is FileSystem Automation........................\n\n");
		print("\n " + argv[0]+ " -h For Help");
		print("\n " + argv[0]+ " -u For Usage");		
		exit();

	if (argv[1] == "-u") or (argv[1] == "-U"):
		print("\n <Usage> " + argv[0]+ " Directory_Name File_Extension1 File_Extension2");
		exit();

	try:
		DirName = argv[1];
		FileExt1 = argv[2];		
		FileExt2 = argv[3];
		AutomationModule.RenameFiles(DirName,FileExt1,FileExt2);
	except Exception as E:
		fd = open("Directory_Log.txt",'a');
		logmsg = "\n\n Error :  "+ str(E) + "\n Log Time " + str(datetime.datetime.now()) +"\n\n";
		fd.write(logmsg);
		fd.close();

if(__name__ == "__main__"):
	main();