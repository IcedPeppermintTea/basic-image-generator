'''
Basic Image Generator

Input: three values (r, g, b)
Output: image of that RGB value
'''

from PIL import Image

r = int(input("Red: "))
g = int(input("Green: "))
b = int(input("Blue: "))

size = (1920, 1080)

new_img = Image.new('RGB', size, (r,g,b))

new_img.save('img_1.png')