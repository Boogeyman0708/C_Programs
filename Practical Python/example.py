n=int(input("Enter the upper bound: "))
count=0
for i in range(n+1):
    if(i%7==0):
        c=str(i)
        if(c.endswith('6')):
            print(f"[{c}]")
            count+=1
print(count)