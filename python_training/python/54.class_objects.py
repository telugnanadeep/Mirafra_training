class a:						#creating class
	x=10

obj=a()							#creating object
print(obj.x)						#printing funtions and varibles in class thorugh object


class abc:						#creating class with init functions
	def __init__(self,name,age):
		self.name=name
		self.age=age
	
	def myfunc(self):
		print("hello welcome "+self.name)


class bbb(abc):
	pass

obj=abc("deepu",23)

print(obj.name)
print(obj.age)

obj.myfunc()

obj.age=25
print(obj.age)

#del obj.age						#deleting object properties
#print(obj.age)

#del obj 						#deleting object


