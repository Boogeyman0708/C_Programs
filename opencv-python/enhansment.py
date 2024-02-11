'''Write a program to perform the following image enhancement methods– 
a)	Contrast stretching
b)	Gray level slicing without background '''

import cv2
import numpy as np

img=cv2.imread('img/sample1.jpg',0)

cv2.imshow("Original",img)
cv2.waitKey(0)



cv2.destroyAllWindows()