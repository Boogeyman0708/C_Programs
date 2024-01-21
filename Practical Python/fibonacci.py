n=int(input("Enter the no of terms in the series: "))
a,b=0,1
sum=0
for i in range(0,n):
    print(a)
    sum=a+b
    a=b
    b=sum