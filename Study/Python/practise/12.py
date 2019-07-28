def chk(Str1 , Str2):
    Str = []
    
    index = len(Str2)
    
    for i in range(len(Str2)):
        for j in range(len(Str1)):
            
            if Str1[j] > Str2[i]:
                Str1 = Str1.replace(Str1[j],Str2[i],1)
                
                

                break 
            
    print(Str1)

No = int ( input ())

Str1 = ""
Str2 = ""
for i in range(No):
    Str1 = input()
    Str2 = input()
    chk(Str1,Str2)