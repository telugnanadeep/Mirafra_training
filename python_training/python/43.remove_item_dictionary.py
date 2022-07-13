mydict={"k1":"v1","k2":"v2","k3":"v3","k4":"v4"}

print(mydict)

mydict.pop("k2")

print(mydict)

mydict.popitem()
print(mydict)

del mydict["k1"]
print(mydict)

mydict.clear()
print("clear",mydict)

del mydict
print("mydict is deleted ")
