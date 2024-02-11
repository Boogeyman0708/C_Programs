'''Write a program to read an image and rotate that image in clockwise
 and anti-clockwise direction, and display it. '''


import cv2

img=cv2.imread("img/sample1.jpg",1)
cv2.imshow("orig",img)
cv2.waitKey(0)

h= img.shape[0]
w=img.shape[1]

c=(h/2,w/2)

x=cv2.getRotationMatrix2D(center=c,angle=(-45),scale=0.75)
cw= cv2.warpAffine(img,M=x,dsize=(h,w))

cv2.imshow("clockwise",cw)
cv2.waitKey(0)

y=cv2.getRotationMatrix2D(center=c,angle=(45),scale=0.75)
acw=cv2.warpAffine(img,M=y,dsize=(h,w))

cv2.imshow("anti-clockwise",acw)
cv2.waitKey(0)

cv2.destroyAllWindows()