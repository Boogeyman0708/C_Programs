import cv2
import numpy as np


img = cv2.imread("img/sample1.jpg",1)

#variable name = image[start height : end height, start wedth :end wedth]
img_crop= img[0:300,0:500]

cv2.imshow("Cropped image",img_crop)
cv2.waitKey(0)

cv2.imwrite("crop_rose.jpg",img_crop)