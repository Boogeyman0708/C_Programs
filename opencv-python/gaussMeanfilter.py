'''Gaussian noise'''

import cv2
import numpy as np
import random
im=cv2.imread('img/sample1.jpg',1)
img=cv2.resize(im,(520,440))

img1= img.copy()
img2= img.copy()

cv2.randn(img2,(128,128,128),(128,128,128))

img3= cv2.add(img2,img1)

cv2.imshow('img1',img1)
cv2.imshow('img3',img3)


arithmatic_mean= cv2.blur(img3,(3,3))
cv2.imshow('mean',arithmatic_mean)
cv2.waitKey(0)
cv2.destroyAllWindows()