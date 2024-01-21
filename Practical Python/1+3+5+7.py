n=int(input("Enter nth term: "))
a=1
sum=1
for i in range (1,n):
    print (a)
    a=a+2
    sum=sum+a
print("Sum of the series: {0}".format(sum))    