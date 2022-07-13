mytuple=[1,2,3,4,"deep","hello"]
print(mytuple)
y=list(mytuple)

y[1]="world"

mytuple=tuple(y)

print(mytuple)
mytuple=list(mytuple)
mytuple.append(55)
mytuple=tuple(mytuple)

print(mytuple)

del mytuple
print(mytuple)
