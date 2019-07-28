def chk(Str1 , Str2):
    Str = []
    
    index = len(Str2)
    
    for i in range(len(Str2)):
        for j in range(len(Str1)):
            
            if Str1[j] > Str2[i]:
                Str1 = Str1.replace(Str1[j],Str2[i],1)
                
                

                break 
            
    print(Str1)

def chk(Str):
    
    icnt = 0
    index = 0
    Len = len(Str)
    Str2 = Str[::-1]

    for i in range(Len):            
        if( Str[i] == 'a' or Str[i] == 'z'):                   
        	icnt += Len - i

    for i in range(Len):            
        if( Str2[i] == 'a' or Str2[i] == 'z'):                   
        	icnt += Len - i

    
    
	
    print(icnt)

no = int(input())

for i in range(no):
    Str = input()
    chk(Str)