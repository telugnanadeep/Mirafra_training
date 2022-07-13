'''
class a:
	def abc(self):
		print("parent class")

class b(a):
	def abc(self):
		print("child")

obj=a()

obj.abc()

obj=b()
	
obj.abc()
'''
class abc:
	def __init__(self,a,b):
		self.a=a
		self.b=b
	def add(self):
		print("a+b=",self.a+self.b)
class xyz(abc):
	def __init__(self,x,y):
		self.x=x
		self.y=y
		super().__init__(x,y)
		self.year=2022	
	
	
	def sub(self):
		print("a-b=",self.x-self.y)

obj =abc(10,5)
obj.add()


obj =xyz(10,5)
obj.sub()

obj.add()
print(obj.year)
