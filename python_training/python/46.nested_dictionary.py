mydict={"class1":{"r1":"a","r2":"b"},"class2":{"r1":"x","r2":"y"}}

print(mydict)

print(mydict["class2"])

print(mydict["class2"]["r2"])

class1={"r1":"a","r2":"b"}

class2={"r1":"x","r2":"y"}

mydict={"class1":class1,"class2":class2}
print(mydict["class1"])

