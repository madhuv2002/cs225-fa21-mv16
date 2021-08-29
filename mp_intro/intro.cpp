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
      HSLAPixel & pixel2 = outputImage.getPixel(x, y);
      pixel2 = pixel1;
    }
  }
  outputImage.writeToFile(outputFile);
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  // TODO: Part 3

  return png;
}
