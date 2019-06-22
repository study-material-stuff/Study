def ChkNum(num):
	if(num>0):
		ret = "Positive number";
	elif(num<0):
		ret = "Negative Number";
	else:
		ret = "Zero";
	return ret;

no=int(input("Enter the number"));
print(ChkNum(no));