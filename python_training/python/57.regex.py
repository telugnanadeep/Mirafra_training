import re

print("findall")
import re

txt = "The rain in Spain"
x = re.findall("ai", txt)
print(x)

print("didnt find")


txt = "The rain in Spain"
x = re.findall("vizag", txt)
print(x)

print("search")

x = re.search("Spain",txt)
print(x)

print("search is not there")
x =re.search("vizag",txt)
print(x)

print("sub()")

x= re.sub("Spain","vizag",txt)
print(x)

print("split")

x=re.split("\s",txt)
print(x)
