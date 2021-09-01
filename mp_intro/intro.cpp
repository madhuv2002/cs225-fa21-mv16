#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include <cmath>

#include <string>

using cs225::PNG;
using cs225::HSLAPixel;

void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
  PNG inputImage;
  inputImage.readFromFile(inputFile);
  PNG outputImage(inputImage.width(), inputImage.height());
  
  for (unsigned x = 0; x < inputImage.width(); x++) {
    for (unsigned y = 0; y < inputImage.height(); y++) {
      HSLAPixel & pixel1 = inputImage.getPixel(x, y);
      HSLAPixel & pixel2 = outputImage.getPixel(inputImage.width() - 1 - x, inputImage.height() - 1 - y);
      pixel2 = pixel1;
    }
  }
  outputImage.writeToFile(outputFile);
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3
  int centerX = width / 2;
  int centerY = height / 2;
  int distance = sqrt((height * height) + (width * width));
  for (unsigned x = 0; x < width; x++) {
    for (unsigned y = 0; y < height / 1.5; y++) {
      HSLAPixel & pixel = png.getPixel(x, y);
      int diffX = centerX - x;
      pixel.h = 100 * (sqrt((diffX * diffX) + 
        (y * y)) / distance);
      pixel.l = 0.5;
      pixel.s = 0.8;
    }
  }
  for (unsigned x = 0; x < width; x++) {
    for (unsigned y = height / 1.5; y < height; y++) {
      HSLAPixel & pixel = png.getPixel(x, y);
      int diffX = centerX - x;
      pixel.h = 300 * (sqrt((diffX * diffX) + 
        (y * y)) / distance);
      pixel.l = 0.5;
      pixel.s = 0.8;
    }
  }
  return png;
}



