
No = input()                  
List = []

tab = 1;
cnt = 1;
 
for i in range(int(No)):
	   List.append(input())

i = 1

while i != len(List):
	
	if List[i] > List[i-1]:
		tab += 1
	elif List[i-1] == List[i]:
		tab = 1
	else :
		tab = 1

	cnt += tab 
	
	i+=1

print(cnt)
