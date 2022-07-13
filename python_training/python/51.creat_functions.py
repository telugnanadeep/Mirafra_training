def myfun():						#creating funtion
	print("hello world!")				#block of funtion

myfun()							#calling a function



def myfun(arg):						#funtion with argument
	print(arg +" gnanadeep")


myfun("my name is ")					#passing argument in funtion call


def myfun(arg1,arg2):
	print(arg1 + arg2)

myfun("hello"," world")

#myfun("hello") #it will give error beacuse we r passing only 1 arg but we need to pass 2 arguments


def myfun(*arg):					#giving multple agruments 
	print(f"u r name is {arg[1]}")

myfun("gnana","deep")

def myfun(arg1,arg2,arg3):				#passing keys as arguments
	print(arg1 + arg2 +arg3)

myfun(arg1="hello",arg2=" deepu",arg3=" how are you")


def myfun(**kwarg):
	print(f"hello {kwarg['name']} my {kwarg['age']}")

myfun(name="gnanadeep",age="23")

def myfun(mylist):
	for x in mylist:
		print(x)

mylist=[1,2,3,4,5]
myfun(mylist)
