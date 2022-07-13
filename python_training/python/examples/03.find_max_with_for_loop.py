num =int(input("enter size of list : "))
mylist=[]
for i in range(0,num):
	mylist.append(int(input("enter value to list : ")))

max=mylist[0]
for x in range(1,len(mylist)):
	if mylist[x]>max:
		max=mylist[x]


print(max)
		

	
