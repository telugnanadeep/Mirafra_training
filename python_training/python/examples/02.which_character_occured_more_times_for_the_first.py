str = input("enter a string : ")
dict ={}

for i in range(len(str)):
	if str[i] in dict:
		dict[str[i]] +=1
	else:
		dict[str[i]] = 1

value=list(dict.values())
key=list(dict.keys())

print(key[ value.index(max(value))])


	

