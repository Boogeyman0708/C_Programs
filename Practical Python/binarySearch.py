def binary_search(list,ser):
    lb = 0
    ub = len(list)-1
    while lb<=ub:
        mid = (lb+ub)//2
        if(list[mid] == ser):
            return(f"Element found at: {mid}")
        else:
            if(list[mid]<n):
                lb=mid+1
            else:
                ub=mid-1
    return("Element not found!!!")


n=int(input("Enter the number of element of the array:\t"))
myList=[]
for i in range(n):
    k=int(input(f"Element {i+1}:\t"))
    myList.append(k)
ser=int(input("Enter the element to search: \t"))
print(f"List: {myList}")

print(binary_search(myList,ser))