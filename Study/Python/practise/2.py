
def Check(row,col):

	even_cnt = 0;
	odd_cnt = 0;

	for i in range(int(row)):
		for j in range(int(col)):		
			if i >= j :            # not zero
				if i+1 & 1 :	   # odd num	
					odd_cnt += 1;
				else:
					even_cnt += 1; # even num				
			
				
	return even_cnt , odd_cnt
		
def main():

    for i in range(int(input())):
        row, col = map(int, input().split())
        print(" ",Check(row,col))
                
if __name__ == "__main__":
    main();
