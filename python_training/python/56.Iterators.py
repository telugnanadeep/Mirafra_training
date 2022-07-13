mylist=[1,2,3,4,5,6]

it = iter(mylist)

print(it.__next__())
print(it.__next__())
print(it.__next__())
print(it.__next__())
print(it.__next__())

print(next(it))


print("\n\ncreating iterator")
class topten:
	def __init__(self):
		self.num=1

	def __iter__(self):
		return self

	def __next__(self):
		if self.num <= 10:
			x=self.num
			self.num += 1
			return x
		else:
			raise StopIteration

val = topten()

for i in val:
	print(i)
