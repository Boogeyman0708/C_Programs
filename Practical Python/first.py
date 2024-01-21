a=int(input("enter first value: "))
b=int(input("enter second value: "))
print("Before swapping first value is {0} and the second value is {1}".format(a,b))
#a=a+b
#b=a-b
#a=a-b
a,b=b,a # process name is unpacking     
print( "after swapping first value is {0} and second value is {1}".format(a,b))