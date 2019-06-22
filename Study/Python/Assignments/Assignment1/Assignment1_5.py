#5.Write a program which display 10 to 1 on screen

print("Using while Loop \n");
i = 10;
while i !=0:
	print(i);
	i = i - 1;


print("Using for Loop \n");
i = 9;
for x in range(1,11):
	x  = x + i;
	print(x);
	i = i - 2;
