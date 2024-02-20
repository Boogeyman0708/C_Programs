string=(input("Enter the String: "))
list1=list(string)
list1.sort()
freq=[]
freq=[list1.count(ele) for ele in list1]
print(freq)
d=dict(zip(list1,freq))
print(d)