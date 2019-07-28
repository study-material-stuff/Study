def chk(arr,no,s):
    
    high = 0 
    isum = 0;

    for i in range(no):

    	while(isum != s and high < no):

    		isum += arr[high]
    		high+=1
    	
    	print("isum => ",isum)
        
    	if isum == s:
       		print("YES")
        	return
    
    	isum -= arr[i] 
    	high = i
    	print("i = ",i)


test = int(input())

for i in range(test):
    
    no = int(input())
    
    arr = list(map(int , input().split()))
    
    s = int(input())
    
    chk(arr,no,s)