import psutil;


def GetAllProcess():
	listprocess = [];

	for proc in psutil.process_iter():
		try:
			pinfo = proc.as_dict(attrs = ['pid','name','username']);
			pinfo['vms'] = proc.memory_info().vms / (1024*1024);

			listprocess.append(pinfo);
		
		except (psutil.NoSuchProcess,psutil.AccessDenied,psutil.ZombieProcess):
			pass
	return listprocess;

def ChkProcess(ProcessName):
	listprocess = [];

	try:
		pinfo = [p.info for p in psutil.process_iter(attrs=['pid', 'name','username']) if ProcessName in p.info['name']];
		#pinfo['vms'] = proc.memory_info().vms / (1024*1024);
		print(pinfo);

		listprocess.append(pinfo);
		
	except (psutil.NoSuchProcess,psutil.AccessDenied,psutil.ZombieProcess) as E:
		print(E)
	return listprocess;