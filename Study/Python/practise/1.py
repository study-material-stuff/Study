def DeleteFriend(Total_Friend,DeleteCnt, List):
    temp = []
    
    for i in List:
        while DeleteCnt and temp and temp[-1] < i:
            temp.pop()
            DeleteCnt -= 1;
        temp.append(i)
    print(" ".join(map(str,temp)))
    
def main():

    for i in range(int(input())):
        Total_Friend, DeleteCnt = map(int, input().split())
        List = map(int, input().split())
        DeleteFriend(Total_Friend, DeleteCnt , List)        
                
                
if __name__ == "__main__":
    main();
