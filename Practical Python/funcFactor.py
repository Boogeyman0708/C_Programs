def number_of_factors(num):
    c=0
    for i in range(1,num+1):
        if(num%i == 0):
            c+=1
    print(f"The number of factors of the element {num} is: ",c)


def list_of_factors(num):
    list=[]
    for i in range(1,num+1):
        if(num%i == 0):
            list.append(i)
    print(f"The list of the factors for {num} is: ",list)


n = int(input("Enter a number to check: "))

number_of_factors(n)
list_of_factors(n)