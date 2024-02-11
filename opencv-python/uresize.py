import cv2
import numpy as np

img= cv2.imread('img/sample1.jpg')

cv2.imshow("Original",img)
cv2.waitKey(0)

new_img = cv2.resize(img,(img.shape[0]//2,img.shape[1]//2))

cv2.imshow("Resized",new_img)
cv2.waitKey(0)


A= cv2.getRotationMatrix2D(img,angle= -45,scale=0.75)
imz=cv2.warpAffine(img,M=A,dsize=(img.shape[0],img.shape[1]))

cv2.imshow('sfa',imz)
cv2.waitKey(0)