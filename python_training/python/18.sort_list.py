import random

mylist=[0,1,2,3,4,5,6,7,8,9]

#print(mylist)

random.shuffle(mylist)


print("mylist :",mylist)


mylist.sort()
print("list after sorting :",mylist)

random.shuffle(mylist)

print("mylist :",mylist)
