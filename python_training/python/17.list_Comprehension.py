print("normal way ")

mylist = ["deepu","aaa","bbb","hello"]

new=[]

for x in mylist:
	if "e" in x:
		new.append(x)


print(new)



print("\nusing list Comprehension method ")

newlist=[x for x in mylist if "e" in x]

print(newlist)

abc=[x for x in range(10)]
print(abc)


even = [x for x in abc if(x%2==0)]

print(even)
