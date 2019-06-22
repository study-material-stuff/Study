#1.Design automation script which accept directory name and file extension from user. Display all
#files with that extension.
#Usage : DirectoryFileSearch.py “Demo” “.txt”
import datetime;
from sys import *;
import AutomationModule;

def CreateOutput(DirName,Data):
	defaultFileName = AutomationModule.ChkFileExists(DirName +"_Output.txt");
	fd = open(defaultFileName,"x");
	fd.write(Data);
	fd.close();

def main():
	if (len(argv) < 2) or (len(argv) > 3):
		print("Invalid number arguments");
		exit();

	if (argv[1] == "-h") or (argv[1] == "-H"):
		print("\n\n\t\t........................This is FileSystem Automation........................\n\n");
		print("\n " + argv[0]+ " -h For Help");
		print("\n " + argv[0]+ " -u For Usage");
		exit();

	if (argv[1] == "-u") or (argv[1] == "-U"):
		print("\n <Usage> " + argv[0]+ " Directory_Name File_Extension ");
		exit();

	try:
		DirName = argv[1];
		FileExt = argv[2];		
		Data = AutomationModule.GetAllFiles(DirName,FileExt);
		CreateOutput(DirName,Data);
		
	except Exception as E:
		fd = open("Directory_Log.txt",'a');
		logmsg = "\n\n Error :  "+ str(E) + "\n Log Time " + str(datetime.datetime.now()) +"\n\n";
		fd.write(logmsg);
		fd.close();

if(__name__ == "__main__"):
	main();