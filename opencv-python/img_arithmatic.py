'''Write a program to perform the following image arithmetic. 
a)	Image addition 
b)	Image subtraction 
c)	Image multiplication 
d)	Image division '''

import cv2

img1= cv2.imread('img/sample1.jpg',1)
img2= cv2.imread('img/paper.jpg')

cv2.imshow('img1 before resize',img1)
cv2.waitKey(0)

cv2.imshow('img2 before resize',img2)
cv2.waitKey(0)

img2 = cv2.resize(img2,(img1.shape[1],img1.shape[0]))

cv2.imshow('img2 after resize',img2)
cv2.waitKey(0)

#addition

img_add= cv2.add(img1,img2)
cv2.imshow('after addition',img_add)
cv2.waitKey(0)

#subtraction

img_sub= cv2.subtract(img1,img2)
cv2.imshow('after subtraction',img_sub)
cv2.waitKey(0)

#absolute diffence

img_absdiff= cv2.absdiff(img1,img2)
cv2.imshow('after absolute diff',img_absdiff)
cv2.waitKey(0)

#multiplication

img_mul= cv2.multiply(img1,img2)
cv2.imshow('after multiplication',img_mul)
cv2.waitKey(0)

#division

img_div= cv2.divide(img1,img2)
cv2.imshow('after division',img_div)
cv2.waitKey(0)

#average

img_avg= cv2.addWeighted(img1,0.5,img2,0.5,0)
cv2.imshow('average of two image',img_avg)
cv2.waitKey(0)

cv2.destroyAllWindows()