import cv2
import numpy as np

img= cv2.imread('img/sample1.jpg')

cv2.imshow("Original",img)
cv2.waitKey(0)

Virtical_flip= cv2.flip(img,0)

cv2.imshow("Virtical_flip",Virtical_flip)
cv2.waitKey(0)


Horizontal_flip= cv2.flip(img,1)

cv2.imshow("Horizontal_flip",Horizontal_flip)
cv2.waitKey(0)

Both_flip= cv2.flip(img,-1)

cv2.imshow("Both_flip",Both_flip)
cv2.waitKey(0)