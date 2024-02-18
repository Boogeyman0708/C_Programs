n=int(input("Enter the number of element for the series:    "))
a=0
b=1
sum=0
for i in range(n):
    print(a)
    sum=a+b
    a=b
    b=sum