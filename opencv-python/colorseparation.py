'''Write a program to perform color separation into R, G, and B from a color image. '''

import cv2

img= cv2.imread('img/sample1.jpg')

blue, green, red  = cv2.split(img)

cv2.imshow('Original',img)
cv2.waitKey(0)

cv2.imshow('Without Blue',blue)
cv2.waitKey(0)

cv2.imshow('Without Green',green)
cv2.waitKey(0)

cv2.imshow('Without Red',red)
cv2.waitKey(0)


cv2.destroyAllWindows()