import shutil, os;


def GetAllFiles(DirName,FileExt):
	if(os.path.isdir(DirName)):
		data = "";

		for folder, subfolder, files in os.walk(DirName):
			for file in files:
				if(file.endswith(FileExt)):
					data += "Folder Name : "+ folder + "\n";
					data += os.path.abspath(folder +"\\"+ file)+"\n\n";
	return data;			
	

def RenameFiles(DirName,FileExt1,FileExt2):
	if(os.path.isdir(DirName)):
		for folder, subfolder, files in os.walk(DirName):
			for file in files:
				if(file.endswith(FileExt1)):
					newfile = os.path.abspath(folder +"\\"+ file) ;
					newfile = newfile.replace(FileExt1,FileExt2);
					os.rename(os.path.abspath(folder +"\\"+ file),newfile); 
					

def CopyAllFiles(DirName,NewDirName):
	if(os.path.isdir(DirName)):
		TempDirName = ChkDirExists(NewDirName);
		os.mkdir(TempDirName);
		for folder, subfolder, files in os.walk(DirName):
			for file in files:
				shutil.copy(os.path.abspath(folder +"\\"+ file),TempDirName);

def CopySpecificFiles(DirName,NewDirName,FileExt):
	if(os.path.isdir(DirName)):
		TempDirName = ChkDirExists(NewDirName);
		os.mkdir(TempDirName);
		for folder, subfolder, files in os.walk(DirName):
			for file in files:
				if(file.endswith(FileExt)):
					shutil.copy(os.path.abspath(folder +"\\"+ file),TempDirName);

def ChkFileExists(filename,cnt = 0):	#checks if file exists and return the new file name for eg Demo_Copy.txt, Demo_Copy_1.txt	

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

def ChkDirExists(DirName,cnt = 0):	#checks if Directory exists and return the new directory name for eg Demo_Temp , Demo_Temp_1	

	if(not os.path.exists(DirName)):
		return DirName;
	elif("_Temp" not in DirName):			
		DirName = DirName + "_Temp."; 		 
	else:
		a = DirName.split('_Temp');		
		newfilename = a[0] + "_Temp_" + str(cnt);
		DirName = newfilename;		
	cnt += 1;
	return ChkFileExists(DirName,cnt);