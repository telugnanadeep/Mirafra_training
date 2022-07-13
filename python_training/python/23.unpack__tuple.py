mytuple =[1,2,3]
print("normal tuple unpacking")

(a,b,c)=mytuple
print(a)
print(b)
print(c)

print("unpack tuple with *")
mylist=[]
for i in range(20,30,2):
	mylist.append(i)

mytuple=tuple(mylist)

(a,b,*c)=mytuple

print(a)
print(b)
print(*c)
