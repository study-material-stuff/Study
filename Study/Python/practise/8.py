# prints minimum number of substring 

def chk(Str):
	temp = ""

	for i in range(len(Str)):
		if Str[i] not in temp:
			temp += Str[i]

	len1 = len(Str)
	len2 = len(temp)

	if len1 % len2 == 0 and len1 != len2:
		print("1")
	else :
		print("-1")

No = int(input())

for i in range(No):
    Str = input()
    chk(Str)
    
