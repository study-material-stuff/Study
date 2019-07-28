from sys import stdin
line = []

for string in stdin:
	if string == '\n':
		break;	
	
	line.append(string)



for string in line:
	
	Str = []
	
	Str = string.split('//')
	Str[0] = Str[0].replace('->','.')

	string = "";
	icnt = 1

	for i in Str:
		string += i;
		
		if icnt == len(Str):
			break			
		icnt += 1		
		string += '//'    

	
	print(string ,end="")
  


