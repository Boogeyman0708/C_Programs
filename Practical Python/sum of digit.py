n=int(input("Enter the number: "))
s=0
r=0
while(n>0):
    r=n%10
    s=s+r
    n=n//10
    print(s)
print("The total sum of digit is: ",s)