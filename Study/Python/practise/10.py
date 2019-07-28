def chk(List,m_n):
    
    Max = max(List)
    maxlst = 0
    maxl = 0
    
    for k in range(m_n[1]-1):
        
        for i in range(len(List)):
            for j in range(1,len(List)):
               
               if maxl < abs(List[i] - List[j]) :
                   maxl = abs(List[i] - List[j])
        
                            
        List.remove(min(List))
        print(List)    
        maxlst += maxl
        print(maxl)
        maxl = 0

    print(maxlst)    
    

No = int(input()) 

for i in range(No):
    
    m_n = list(map(int,input().split())) 

    List = list(map(int,input().split()))

    chk(List,m_n)
