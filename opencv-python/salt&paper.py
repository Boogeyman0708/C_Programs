
import cv2
import numpy as np
import random
im=cv2.imread('img/sample1.jpg',1)
img=cv2.resize(im,(520,440))

arr=np.array(img)
h=arr.shape[0]
w=arr.shape[1]

x=h*w

n=random.randint(0,x)

for i in range(0,n):
    i=random.randint(0,h-1)
    j=random.randint(0,w-1)
    img[i][j]=0

for i in range(0,n):
    i=random.randint(0,h-1)
    j=random.randint(0,w-1)
    img[i][j]=255

cv2.imshow('saltandpepper',img)
cv2.waitKey(0)
cv2.destroyAllWindows()