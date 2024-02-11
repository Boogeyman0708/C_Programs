'''Write a program to enhance the image in spatial domain using histogram equalization method. '''

import cv2
import matplotlib.pyplot as mpl

def plot_histogram(image,title):
    hist= cv2.calcHist(image,[0],None,[256],[0,256])
    mpl.plot(hist, color='blue')
    mpl.xlabel('Pixel Values')
    mpl.ylabel('Frequency')
    mpl.title(title)
    mpl.show()

img1=cv2.imread('img/car.jpg',0)
img= cv2.resize(img1,[1280,720])

cv2.imshow('Original image',img)
cv2.waitKey(0)

plot_histogram(img,"Histogram of the original image")

img_2= cv2.equalizeHist(img)

cv2.imshow('Equalized image',img_2)
cv2.waitKey(0)

plot_histogram(img_2,"Histogram of the equalized image")

cv2.destroyAllWindows()