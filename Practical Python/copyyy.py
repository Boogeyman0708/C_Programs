n=int(input("Enter the number of element to check: "))
x=[]
print("Enter elements one by one: ")
for i in range(n):
    x.append(int(input()))
print(x)
maxzero=0
count=0
for i in range(len(x)):
    if(x[i]==0):
        count=count+1
        
        if(i==len(x)-1):
            if(count>maxzero):
                maxzero=count         
    if(x[i]==1):
        if(count>maxzero):
            maxzero=count
        count=0
print("Longest run of Zeros in a row is",maxzero)