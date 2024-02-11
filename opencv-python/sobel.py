'''Use sobel to ditect edges'''

import cv2
import numpy as np

img=cv2.imread('img/sample1.jpg',cv2.IMREAD_GRAYSCALE)

cv2.imshow("Original image",img)
cv2.waitKey(0)

sobelx= cv2.Sobel(img,cv2.CV_64F,1,0,ksize=5)
sobely= cv2.Sobel(img,cv2.CV_64F,0,1,ksize=5)

cv2.imshow("Sobelx",sobelx)
cv2.waitKey(0)

cv2.imshow("Sobely",sobely)
cv2.waitKey(0)

cv2.imshow("Sobelx",sobelx+sobely)
cv2.waitKey(0)

cv2.destroyAllWindows()