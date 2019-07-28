# boy and girl height

def Check(boy,girl,blist , glist):	
	bret = True;
    
	if boy > girl:
		print("No");
		return 
	
	b = []	
	blist.sort()
	glist.sort()

	for i in range(len(blist)-1):
			if glist[i] > blist[i]:
				bret = False;
				break;		

	if bret == True:
		print("YES")
	else:
		print("NO")		
	
for i in range(int(input())):
        boy, girl = map(int, input().split())
        boyheight = list(map(int, input().split()))
        girlheight = list(map(int, input().split()))
        Check(boy,girl,boyheight,girlheight)    
        
