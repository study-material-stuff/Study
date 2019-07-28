
    
No = int(input())
cnt1 = 0
index = 0

for i in range(No):
    
    data = list(map(int,input().split()))
    

    for i in range(data[0]):   
    

        for k in range(data[1]):
            
            List = list(map(int,input().split()))
            cnt = sum(List)
            
            if cnt1 < cnt:
                cnt1 = cnt 
                index = k+1
    
        print(index , end = " ")    
        cnt1 = 0
        `index = 0
    

    print()

        


