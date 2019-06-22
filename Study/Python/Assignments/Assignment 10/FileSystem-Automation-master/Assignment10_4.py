#4. Design automation script which accept two directory names and one file extension. Copy all
#files with the specified extension from first directory into second directory. Second directory
#should be created at run time.
#Usage : DirectoryCopyExt.py “Demo” “Temp” “.exe”

import datetime;
from sys import *;
import AutomationModule;

def main():
	if (len(argv) != 4):
		print("Invalid number arguments");
		exit();

	if (argv[1] == "-h") or (argv[1] == "-H"):
		print("\n\n\t\t........................This is FileSystem Automation........................\n\n");
		print("\n " + argv[0]+ " -h For Help");
		print("\n " + argv[0]+ " -u For Usage");		
		exit();

	if (argv[1] == "-u") or (argv[1] == "-U"):
		print("\n <Usage> " + argv[0]+ " Directory_Name NewDirectory_Name File_Extension");
		exit();

	try:
		DirName = argv[1];
		NewDirName = argv[2];
		FileExt = argv[3];
		AutomationModule.CopySpecificFiles(DirName,NewDirName,FileExt);
	except Exception as E:
		fd = open("Directory_Log.txt",'a');
		logmsg = "\n\n Error :  "+ str(E) + "\n Log Time " + str(datetime.datetime.now()) +"\n\n";
		fd.write(logmsg);
		fd.close();

if(__name__ == "__main__"):
	main();