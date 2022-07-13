list1=[1,2,3,4,5]
list2=["deepu","hello","world"]

mylist=list1+list2
print(mylist)

for x in list2:
	list1.append(x)

print(list1)

list2.extend(list1)
print(list2)
	
