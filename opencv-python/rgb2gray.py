import cv2
import numpy as np


img = cv2.imread("img/sample1.jpg",1)

img_gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)



cv2.imshow("imageblue",img)

cv2.waitKey(0)


cv2.imshow("image",img_gray)

cv2.waitKey(0)