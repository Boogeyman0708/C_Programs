n=int(input("Enter the number of element to check: "))
list1=[]
print("Enter elements one by one: ")
for i in range(n):
    list1.append(int(input()))
print(list1)
maxCount=0
count=0
for i in range(len(list1)):
    if(list1[i]==0):
        count+=1
        if(i==len(list1)-1):
            if(maxCount<count):
                maxCount=count
    if(list1[i]==1):
        if(maxCount<count):
            maxCount=count
        count=0       
print("The longest run of zeros is: ",maxCount)