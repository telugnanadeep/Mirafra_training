print("normal while loop")

i = 0
while i<10:
	print(i)
	i=i+1
print("while with break")
i=0
while i<10:
	if(i==5):
		break
	print(i)
	i=i+1

print("while with continue")
i=0
while i<10:
	i=i+1
	if i==5:
		continue
	print(i)

print("while with else")
i=0
while i<10:
	print(i)
	i=i+1
else:
	print("i greater then 10 ")


	
