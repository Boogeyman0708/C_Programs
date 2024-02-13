'''Write a program to read an image and rotate that image in clockwise
 and anti-clockwise direction, and display it. '''


import cv2
import numpy as np
import matplotlib.pyplot as mpl

def plot_histogram(img,title):
    hist= cv2.calcHist(img,[0],None,[256],[0,256])
    mpl.plot(hist,color="blue")
    mpl.xlabel('Pixel Values')
    mpl.ylabel('Friquency')
    mpl.title(title)
    mpl.show()

img1=cv2.imread('img/car.jpg',0)
img= cv2.resize(img1,[1280,720])

cv2.imshow('Original image',img)

plot_histogram(img,"histogram of the original image")

eq_img= cv2.equalizeHist(img)
plot_histogram(eq_img,"histogram of the equalized image")
cv2.waitKey(0)
cv2.destroyAllWindows()