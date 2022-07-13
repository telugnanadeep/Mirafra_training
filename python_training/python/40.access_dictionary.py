mydict = {"key1":"value1","key2":"value2","key3":"value3"}

print(mydict["key1"])

x=mydict.get("key2")

print(x)

a=mydict.keys()
print(a)

x=mydict.values()
print(x)


mydict["key4"]="value4"
print(x)
print(a)


b=mydict.items()
print(b)
