import math

def foo(n):
    ret = 0
    
    for i in range(n):
        
        if math.gcd(n, i) == 1:
            
            ret += 1;

    return ret
    
def SpecialSum(N):
    ret = 0;
    
    for i in range(1,N+1):
        if (N % i) == 0 :
            ret += foo(i)
    
    return ret
    
    
No = int(input())
for i in range(No):
    print(SpecialSum(int(input())))
