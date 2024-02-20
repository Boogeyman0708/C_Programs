n="i am a doctor"
n1=n.replace(" ","")
list1=list(n1)
list1.sort()
freq=[list1.count(ele) for ele in list1]
# d=dict(zip(list1,freq))
# print(d)
print(freq)