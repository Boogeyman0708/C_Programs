def addition(m1,m2):
    add=[]
    for i in range(m):
        t=[]
        for j in range(n):
            t.append(m1[i][j]+m2[i][j])
        add.append(t)
    print("Addition matrix:")
    for i in range(m):
        for j in range(n):
            print(add[i][j],end="\t")
        print()

def subtraction(m1,m2):
    sub=[]
    for i in range(m):
        t=[]
        for j in range(n):
            t.append(m1[i][j]-m2[i][j])
        sub.append(t)
    print("Addition matrix:")
    for i in range(m):
        for j in range(n):
            print(sub[i][j],end="\t")
        print()

def multiplication(m1,m2):
    mul=[]
    for i in range(len(m1)):
        t=[]
        for j in range(len(m2[0])):
            result=0
            for k in range(len(m2)):
                result +=m1[i][k]*m2[k][j]
            t.append(result)
        mul.append(t)
    print("Addition matrix:")
    for i in range(m):
        for j in range(n):
            print(mul[i][j],end="\t")
        print()
    







matrix1=[]
matrix2=[]
m=int(input("Enter the row no: "))
n=int(input("Enter the column no: "))

for i in range(m):
    t=[]
    for j in range(n):
        t.append(int(input(f"Enter matrix1[{i}][{j}]: ")))
    matrix1.append(t)
print("Matrix1:")
for i in range(m):
    for j in range(n):
        print(matrix1[i][j],end="\t")
    print()

for i in range(m):
    t=[]
    for j in range(n):
        t.append(int(input(f"Enter matrix2[{i}][{j}]: ")))
    matrix2.append(t)
print("Matrix2:")
for i in range(m):
    for j in range(n):
        print(matrix2[i][j],end="\t")
    print()

addition(matrix1,matrix2)
subtraction(matrix1,matrix2)
multiplication(matrix1,matrix2)
