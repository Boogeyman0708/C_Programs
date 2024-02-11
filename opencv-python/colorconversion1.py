'''Write a program to do image format conversion i.e., from RGB to gray,
 gray to binary, RGB to HSV, HSV to RGB, RGB to YCbCr and YCbCr to RGB.'''


import cv2

img=cv2.imread("img/sample1.jpg",1)

cv2.imshow("Original",img)
cv2.waitKey(0)

#rgb2gray

img_gray= cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
cv2.imshow("Grayscale",img_gray)
cv2.waitKey(0)

#rgb2hsv

img_hsv= cv2.cvtColor(img,cv2.COLOR_RGB2HSV)
cv2.imshow("HSV",img_hsv)
cv2.waitKey(0)

#hsv2rgb

img_rgb= cv2.cvtColor(img_hsv,cv2.COLOR_HSV2RGB)
cv2.imshow("Color",img_rgb)
cv2.waitKey(0)

#rgb2ycrcb

img_ycrcb= cv2.cvtColor(img,cv2.COLOR_BGR2YCrCb)
cv2.imshow("YCrCb",img_ycrcb)
cv2.waitKey(0)

#ycrcb2rgb

img_ycrcb2rgb= cv2.cvtColor(img_ycrcb,cv2.COLOR_YCrCb2BGR)
cv2.imshow("YCrCb to RGB",img_ycrcb2rgb)
cv2.waitKey(0)

#gray2binary

height= img_gray.shape[0]
width= img_gray.shape[1]

var_img= img_gray.copy()
for i in range (0,height):
    for j in range (0,width):
        if(var_img[i][j]<=128):
            var_img[i][j]=0
        else:
            var_img[i][j]=255
cv2.imshow("Gray to Binary",var_img)
cv2.waitKey(0)            

cv2.destroyAllWindows()