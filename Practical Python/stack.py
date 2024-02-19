def push():
    n=int(input("Enter the element to Insert: "))
    if(len(stack)==0):
        stack.append(n)
    else:
        stack.insert(0,n)
    print(n," is inserted into Stack.\n")

def pop():
    if(len(stack)==0):
        print("Stack is EMPTY!!!\n")
    else:
        print(stack[0]," deleted from Stack\n")
        del stack[0]

def display():
    if(len(stack)==0):
        print("Stack is EMPTY!!!\n")   
    else:
        print("Element of Stack:")
        for i in stack:
            print(i)
        print("Stack top is: ",stack[0],"\n")


stack=list()
while(1):
    print("Enter option from below:\n1-PUSH Opetation\n2-POP Operation\n3-Display Stack\nEnter any key to EXIT.")
    option=int(input("Enter: "))
    print()
    if(option==1):
        print("PUSH OPERATION.")
        push()
    elif(option==2):
        print("POP OPERATION.")
        pop()
    elif(option==3):
        print("DISPLAY STACK.")
        display()
    else:
        print("PROGRAM ENDED!!!")
        break