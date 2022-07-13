mydict={"k1":"v1","k2":"v2","k3":"v3","k4":"v4"}


print(mydict)

print("printing keys")
for x in mydict:
	print(x)

print("printing values")
for x in mydict:
	print(mydict[x])

print("print keys using methods")
for x in mydict.keys():
	print(x)

print("print values using methods")
for y in mydict.values():
	print(y)


print("both key and values")
for x,y in mydict.items():
	print(x,y)

