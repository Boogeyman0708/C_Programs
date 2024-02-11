'''Write a program to enhance the image in spatial domain using –
a)	Image negative
b)	Log transformation
c)	Power law transform'''


import cv2
import numpy as np

img= cv2.imread('img/sample1.jpg',1)

cv2.imshow('Oeiginal',img)
cv2.waitKey(0)

gray= cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)

cv2.imshow('Gray',gray)
cv2.waitKey(0)

h= gray.shape[0]
w= gray.shape[1]

#negative
neg= gray.copy()

for i in range(0,h):
    for j in range(0,w):
        neg[i][j]= 255 - gray[i][j]

cv2.imshow('Negative',neg)
cv2.waitKey(0)

#log transformation

c= 255/(np.log(1 + np.max(gray)))
#logt= c*np.log(1+gray)
logt= np.array(c*np.log(1+gray),dtype= np.uint8)

cv2.imshow('Log Transformation',logt)
cv2.waitKey(0)

#power law transformation
l=[0.5,1,1.5]
for gamma in l:
    powerlaw= np.array(255*(gray/255)**gamma, dtype= np.uint8)

    cv2.imshow('Power law transformation: '+str(gamma),powerlaw)
    cv2.waitKey(0)

cv2.destroyAllWindows()