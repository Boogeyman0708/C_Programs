#jhsdgjkngjsdgk
import cv2
import numpy as np

def mean_filter(img,karnel_size):

    return cv2.blur(img,(karnel_size,karnel_size))

def median_filter(img,karnel_size):

    return cv2.medianBlur(img,karnel_size)

def gaussian_filter(img,sigma):

    return cv2.GaussianBlur(img,(0,0),sigma)

img= cv2.imread('img/sample1.jpg')

cv2.imshow("Original",img)

meanFilter= mean_filter(img,5)
medianFilter= median_filter(img,9)
gaussianFilter= gaussian_filter(img,3)

cv2.imshow("mean filter",meanFilter)
cv2.imshow("median filter",medianFilter)
cv2.imshow("gaussian filter",gaussianFilter)


cv2.waitKey(0)
cv2.destroyAllWindows()