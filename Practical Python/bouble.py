def bouble_sort(list):
    for i in range(len(list)-1):
        for j in range(len(list)-1-i):
            if(list[j]>list[j+1]):
                list[j],list[j+1]=list[j+1],list[j]
    return(list)



n=int(input("Enter the no of element to sort:\t"))
myList=[]
print("Enter element one by one: \n")
for x in range(n):
    k=int(input(f"Element {x}:\t"))
    myList.append(k)
print(f"Unordered List: {myList}")
print(f"After using Bouble sort on the list: \n{bouble_sort(myList)}")