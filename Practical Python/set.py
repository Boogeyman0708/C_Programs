set1={'Kolkata','Delhi','Mumbai','Pune'}
print("before conversion",set1)
list=list(set1)
print(list)
list1=[]
for i in list:
    list1.append(i.upper())
print(list1)
set1=set(list1)
print("after convertion",set1)