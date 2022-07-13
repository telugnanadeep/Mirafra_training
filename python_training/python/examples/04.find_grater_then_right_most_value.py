num=int(input("enter size of list : "))
a=[]
for i in range(0,num):
        a.append(int(input("enter values into list : ")))    



b=[]
for index in range(len(a)-1):
    if(a[index] > a[index + 1]):
        b.append(a[index])
    
print(b)

