from PIL import Image
import numpy as np
import math

def readFile(path):
  with open(path, "rt") as f:
    return f.read()

def writeFile(path, contents):
  with open(path, "wt") as f:
    f.write(contents)

def writePic(pixPath, picPath):
  
  pixels = readPix(pixPath)

  # Convert the pixels into an array using numpy
  array = np.array(pixels, dtype=np.uint8)

  # Use PIL to create an image from the new array of pixels
  new_image = Image.fromarray(array)
  new_image.save(picPath)

def readPix(pixPath):
  contents = readFile(pixPath)

  pixels = []
  for line in contents.splitlines():

    pixelLine = []
    count = 0
    r = 0
    g = 0
    b = 0
    for val in line.split(" "):
      if count == 0:
        r = int(val)
        count += 1
      elif count == 1:
        g = int(val)
        count += 1
      else:
        b = int(val)
        pixelLine.append((r, g, b))
        count = 0

    pixels.append(pixelLine)

  return pixels


def genPix(pixPath):
  resCols = 1280
  resRows = 720
  lines = []
  for i in range(resRows):
    line = []
    for j in range(resCols):
      r = int(round(255*(i/resRows)))
      g = int(round(255*(resCols-j)/resCols))
      b = int(round(255*(resRows-i)/resRows))
      pixStr = "%d %d %d" % (r, g, b)
      line.append(pixStr)

    lineStr = " ".join(line)
    lines.append(lineStr)

  contents = "\n".join(lines)

  writeFile(pixPath, contents)

genPix("gradient2.txt")
writePic("gradient2.txt", "gradient2.png")