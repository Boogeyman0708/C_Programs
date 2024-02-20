#reverse order

string="my name is lucky"
lst=string.split()
print(lst)

lst.reverse()
print(lst)

string=' '.join(lst)
print(string)

#occurance of specific

string=input("Enter the sentence: ")
n=input("Enter the element to check: ")
counter=0
for i in string:
    if(i==n):
        counter+=1
print(f"Occurance of th element {n} in the given sentance is: ",counter)