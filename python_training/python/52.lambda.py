x= lambda a : a + 10
print(x(20))

x = lambda a,b,c :a+b+c
print(x(10,30,20))


print("lambda using functions")

def myfun(arg):
	return lambda a : a * arg
double=myfun(2)
print(double(11))

triple=myfun(3)
print(triple(11))
