import cv2
import numpy as np

img= cv2.imread('img/sample1.jpg')

cv2.imshow("Original",img)
cv2.waitKey(0)


resize_img = cv2.resize(img,(256,256))

cv2.imshow("Small image",resize_img)
cv2.waitKey(0)

Resize_img = cv2.resize(img,(720,720))

cv2.imshow("Big image",Resize_img)
cv2.waitKey(0)