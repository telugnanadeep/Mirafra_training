print("using set in list")
mylist=[1,1,2,2,3,3,4,4]
print(mylist)

mylist=set(mylist)
mylist=list(mylist)

print(mylist)


print("normal method")
mylist=[1,2,2,1]
print(mylist)
m=[]
mylist=mylist[::-1]
for i in mylist:
        if i in m:
                continue
        else:
                m.append(i)

m=m[::-1]
print(m)

