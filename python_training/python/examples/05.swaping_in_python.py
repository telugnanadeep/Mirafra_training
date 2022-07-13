x =int(input("enter x : "))
y =int(input("enter y : "))

temp=x
x=y
y=x

print("x=",x)
print("y=",y)

print("or")

x=int(input("enter x : "))
y=int(input("enter y : "))

x, y=y, x
print(f"x={x}")
print(f"y={y}")
