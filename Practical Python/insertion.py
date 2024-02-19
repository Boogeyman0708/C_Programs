def insertion_sort(list):
    for i in range (1,len(list)):
        for j in range(i-1,0,-1):
            if (list[j]>list[j+1]):
                list[j],list[j+1]=list[j+1],list[j]
            else:
                break
    return(list)


n=int(input("Enter the no of element to sort:\t"))
myList=[]
print("Enter element one by one: \n")
for x in range(n):
    k=int(input(f"Element {x}:\t"))
    myList.append(k)
print(f"Unordered List: {myList}")
print(f"After using Bouble sort on the list: \n{insertion_sort(myList)}")