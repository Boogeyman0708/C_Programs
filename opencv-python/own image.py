import cv2
import os
import numpy as np

img = np.zeros((512,512,3))

#line

cv2.line(img,pt1=(0,0),pt2=(512,512),color=(255,255,0),thickness=3)

#rectangle

cv2.rectangle(img,pt1=(112,112),pt2=(412,412),color=(0,255,255),thickness=3)

#circle

cv2.circle(img, center=(256,256),radius=50,color= (0,0,255),thickness=-1)

#text

cv2.putText(img,text='hello world',org=(112,112),fontFace=cv2.FONT_ITALIC,color=(255,0,0),fontScale=2.0,thickness=4,lineType=cv2.LINE_AA)

cv2.imshow("Image",img)
cv2.waitKey(0)

cv2.destroyAllWindows()