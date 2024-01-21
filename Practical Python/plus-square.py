n=int(input("Enter the nth term of the series: "))
x=int(input("Enter the value of X: "))
s=0
x1=1
for i in range(0,n):
    s+=x1
    x1*=x
print("The sum of the series is : {0}".format(s))