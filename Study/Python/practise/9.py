def count(List):
    
    cnt1 = 0;
    cnt2 = 0
    
    for i in range(len(List) -1 ):
        if List[i] == 'b' and List[i+1] == 'b':
            cnt1 += 1
        elif List[i] == 'g' and List[i+1] == 'g':
            cnt1 += 1
        else :
            cnt2 += 1
    
    if cnt1 > cnt2:
        print("Little Jhool wins!")
    else:
        print("The teacher wins!")

def chk(List,total):
    
    boy = List[0]
    girl = List[1]

    temp = []

    i = 1;

    while boy != 0 or girl != 0:

        if i % 2 == 0 and boy > 0:
            temp.append("b");
            boy -= 1
            
        elif i % 2 != 0 and girl > 0:
            temp.append("g");
            print("g")
        i+=1;   
    
    count(temp)   
    

testcase = int(input())

for i in range(testcase):
    total = int(input())
    
    List = list(map(int,input().split()))
    chk(List,total)