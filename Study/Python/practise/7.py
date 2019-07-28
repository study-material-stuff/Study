
no = str(574674546476)
cnt = 0;
Len = len(no)
index = 0;

for i in range(Len):
	while index != Len:	
		if int(no[index]) % 2 == 0:
			cnt += 1
		index += 1
	print(cnt , end = " ")
	cnt = 0
	index = i+1

#7 7 7 6 5 5 4 4 3 2 1 1

#7 7 7 6 5 5 4 4 3 2 1 1
