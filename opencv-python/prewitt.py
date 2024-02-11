'''Use prewitt to ditect edges'''

import cv2
import numpy as np

img=cv2.imread('img/sample1.jpg',cv2.IMREAD_GRAYSCALE)

cv2.imshow("Original image",img)

karnelx= np.array([[1,1,1],[0,0,0],[-1,-1,-1]])
karnely= np.array([[-1,0,1],[-1,0,1],[-1,0,1]])

prewittx= cv2.filter2D(img,-1,karnelx)
prewitty= cv2.filter2D(img,-1,karnely)

cv2.imshow("prewittx",prewittx)

cv2.imshow("prewitty",prewitty)

cv2.imshow("prewitt",prewittx+prewitty)

cv2.waitKey(0)

cv2.destroyAllWindows()