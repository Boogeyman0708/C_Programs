s1 = set()
s2 = set()

s1_size=int(input("Enter the size of set1: "))
s2_size=int(input("Enter the size of set2: "))
print("Add element in set1:")
for i in range(s1_size):
    s1.add(input())

print("Add element in set2:")
for i in range(s2_size):
    s2.add(input())

union = s1.union(s2)
intersection = s1.intersection(s2)
difference = s1.difference(s2)

print("Set1 is : ", end="\t")
for i in s1:
    print(i,end=" , ")

print("\nSet2 is : ", end="\t")
for i in s2:
    print(i,end=" , ")

print("\n\nThe Union of the above set is: ",union)
print("\n\nThe Intersection of the above set is: ",intersection)
print("\n\nThe Set-difference of the above set is: ",difference)

list1=list(s1)
list2=list(s2)
list3=[]
list4=[]
for i in list1:
    list3.append(str(i).upper())
s1=set(list3)

for i in list2:
    list4.append(str(i).lower())
s2=set(list4)
print("\n\nAfter conversion set1: ",s1)
print("After conversion set2: ",s2)