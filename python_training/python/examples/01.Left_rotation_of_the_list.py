num=int(input("enter size of list : "))
mylist=[ ]
for i in range(0,num):
	mylist.append(int(input("ente value to list :")))

print(mylist)


print(" Left rotation of the list")

n=int(input("enter no of rotation : "))

for i in range(0,n):
	temp = mylist.pop(0)
	mylist.append(temp)

print(mylist)

	
