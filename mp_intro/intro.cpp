#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"

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
  int skyHue = 42;
  int waterHue = 200;
  for (unsigned x = 0; x < width; x++) {
    for (unsigned y = 0; y < height; y++) {
      HSLAPixel & pixel = png.getPixel(x, y);
      if (y < png.height() / 1.75) {
        pixel.h = skyHue;
        if (skyHue == 70) {
          skyHue = 42;
        } else {
          skyHue++;
        }
      } else {
        pixel.h = waterHue;
        if (waterHue == 262) {
          waterHue = 200;
        } else {
          waterHue++;
        }
      }
      pixel.l = 0.5;
      pixel.s = 0.8;
    }
  }  
  return png;
}


