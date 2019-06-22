#1.Design automation script which display information of running processes as its name, PID,
#Username.
#Usage : ProcInfo.py

import time;
import datetime;
from sys import *;
import ProcessModule as proc;
import ChecksumFunctionalityModule as module;

def CreateOutput(FileName,list):
	defaultFileName = module.ChkFileExists(FileName);

	data = "";
	for element in list:
		data += str(element) + "\n";

	fd = open(defaultFileName,"x");
	fd.write(data);
	fd.close();


def main():
	if  len(argv) != 2:
		print("Invalid number arguments");
		exit();

	if (argv[1] == "-h") or (argv[1] == "-H"):
		print("\n\n\t\t........................This is Process Automation........................\n\n");
		print("\n " + argv[0]+ " -h For Help");
		print("\n " + argv[0]+ " -u For Usage");		
		exit();

	if (argv[1] == "-u") or (argv[1] == "-U"):
		print("\n <Usage> " + argv[0] + "Outputfilename");
		exit();

	try:
		FileName = argv[1];
		List = proc.GetAllProcess();
		CreateOutput(FileName,List);

	except Exception as E:
		fd = open("Error_Log.txt",'a');
		logmsg = "\n\n Error :  "+ str(E) + "\n Log Time " + str(datetime.datetime.now()) +"\n\n";
		fd.write(logmsg);
		fd.close();

if(__name__ == "__main__"):
	main();