def enqueue():
    n=int(input("Enter the element to insert: "))
    queue.append(n)
    print()

def dequeue():
    if(len(queue) == 0):
        print("The queue is Empty.\n")
    else:
        print(queue[0], "is deleted from the queue.")
        del queue[0]
        print()

def display():
    if(len(queue) == 0):
        print("The queue is Empty.\n")
    else:
        print("Elements of the queue are:\n")
        for i in queue:
            print(i,end="\t")
        print("\nFront of the queue is: ",queue[0])    

queue=list()
while(1):
    print("Enter the option from below:\n1 to Enqueue Operation\n2 to Dequeue Operation\n3 to Display\n4 to Exit")
    option=int(input())
    if(option == 1):
        print("Enqueue Operation Selected")
        enqueue()
    elif(option == 2):
        print("Dequeue Option Selected")
        dequeue()
    elif(option == 3):
        print("Display")
        display()
    else:
        break
