a = 50
b = 20

if a>b:
	print("a is greater")

b=100

if a>b:
	print("a is greater")
else:
	print("b is greater")

b=50

if a>b:
	print("a is greater ")
elif a==b:
	print("a nd b are equal")
else:
	print("b is greater ")


print("using short hand if-else")
a=3
b=2
print("short hand if-else") if a>b else print("no")

b=3
print("A") if a > b else print("equal") if a==b else print("B")

