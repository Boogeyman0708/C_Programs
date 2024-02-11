'''Detarmine histogram of a image'''

import cv2
import matplotlib.pyplot as mpl

def plot_histogram(image,title):
    
    hist= cv2.calcHist(image,[0],None,[256],[0,256])
    mpl.plot(hist,color='black')
    mpl.xlabel('Pixel Values')
    mpl.ylabel('Friquescy')
    mpl.title(title)
    mpl.show()

img=cv2.imread('img/sample1.jpg',0)

cv2.imshow('original image',img)
cv2.waitKey(0)

plot_histogram(img,'Histogram of the image')


cv2.destroyAllWindows()