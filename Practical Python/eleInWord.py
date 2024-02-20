string=input("Enter the sentence: ")
n=input("Enter the element to check: ")
print(f"Words in the given sentance that contains element {n} are: ")
list1=string.split()
for i in list1:
    if(n in i):
        print(i,end=" ")
