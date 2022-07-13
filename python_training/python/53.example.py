def abc():
	class a:
		def b(self):
			print("parent")
	class b(a):
		def x(self):
			print("child")
	

	m=a()
	m.b()
	n=b()
	n.b()
	n.x()





abc()
