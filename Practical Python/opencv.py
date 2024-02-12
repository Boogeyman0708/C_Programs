import cv2

def color_separation(image):
    # Splitting the image into its RGB channels
    b, g, r = cv2.split(image)
    return r, g, b

def convert_to_grayscale(image):
    # Converting color image to grayscale
    gray_image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    return gray_image

def display_images(*images):
    for i, img in enumerate(images):
        cv2.imshow(f"Image {i+1}", img)
    cv2.waitKey(0)
    cv2.destroyAllWindows()

# Load the color image
color_image = cv2.imread('color_image.jpg')

# Perform color separation
r, g, b = color_separation(color_image)

# Convert original color image to grayscale
gray_image = convert_to_grayscale(color_image)

# Display output images
display_images(color_image, r, g, b, gray_image)