lst=[]
n=int(input("Enter the number of names: "))
for i in range(n):
    lst.append(input())
print(lst)
str=' '.join(lst)
str1=str.swapcase()
lst1=str1.split()
print(lst1)