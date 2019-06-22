def ChkNum(num):
	if(num%5 == 0):
		ret = True;
	else:
		ret = False;
	return ret;

no=int(input("Enter the number"));
print(ChkNum(no));