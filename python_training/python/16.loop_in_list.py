mylist=[1,2,3,4,5,6]

print("using for loop")
for x in mylist:
	print(x)

print("using for with range and len ")

for i in range(len(mylist)):
	print(mylist[i])

print("using while loop")
i = 0

while i<len(mylist):
	print(mylist[i])
	i=i+1;

print("using list Comprehension")

[print(x) for x in mylist]
