def cmpdict(Dict,val):
	bret = True

	for i in Dict.values():
    	
		if i != val:

			bret = False
			break	
    
	return bret

def chk(Str):
    
    Dict = {}
    temp = ""
    
    val = 0
    List = ""
    bret = True

    for i in Str:
        if i not in Dict:
            Dict[i] = 1;
        else:
            Dict[i] += 1

    
    val = Dict[Str[0]]
    
    bret = cmpdict(Dict,val)

    if bret == True:
    	List = dict(sorted(Dict.items(), key=lambda x: x[1])) # sorts the dictionary according to values
    	
    else:
    	List = dict(sorted(Dict.items(), key=lambda x: x[1]))
    	

    for key , val in List.items():

    	for i in range(val):
    		temp += key


    print(temp)


  
    

#No = int ( input())

#for i in range(No):
#    Str = input()

Str = "aabbccdd"
#Str = "aabcc"
chk(Str)