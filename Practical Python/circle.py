import sys
import math

def area(x):
    area = math.pi*r*r
    return(area)

def perimeter(x):
    peri = 2*math.pi*x
    return (peri)

r=float(input("Enter the radius of the circle: "))
#r=float(sys.argv[1])
circle_area = area(r)
circle_peri = perimeter(r)

print("The Area of the circle:  {0}\nThe Perimeter of the circle:   {1}".format(circle_area,circle_peri))