#include "Image.h"

using namespace cs225;
using namespace std;
void Image::lighten() {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      if (pixel.l <= 0.9) {
        pixel.l += 0.1;
      } else {
        pixel.l = 1;
      }
    }
  }
}

void Image::lighten(double amount) {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      if (pixel.l < 1 - amount) {
        pixel.l += amount;
      } else {
        pixel.l = 1;
      }
    }
  }
}

void Image::darken() {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      if (pixel.l >= 0.1) {
        pixel.l -= 0.1;
      } else {
        pixel.l = 0;
      }
    }
  }
}

void Image::darken(double amount) {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      if (pixel.l > 0 + amount) {
        pixel.l -= amount;
      } else {
        pixel.l = 0;
      }
    }
  }
}

void Image::saturate() {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      if (pixel.s <= 0.9) {
        pixel.s += 0.1;
      } else {
        pixel.s = 1;
      }
    }
  }
}

void Image::saturate(double amount) {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      if (pixel.s < 1 - amount) {
        pixel.s += amount;
      } else {
        pixel.s = 1;
      }
    }
  }
}

void Image::desaturate() {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      if (pixel.s >= 0.1) {
        pixel.s -= 0.1;
      } else {
        pixel.s = 0;
      }
    }
  }
}

void Image::desaturate(double amount) {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      if (pixel.s > 0 + amount) {
        pixel.s -= amount;
      } else {
        pixel.s = 0;
      }
    }
  }
}

void Image::grayscale() {
  for (unsigned i = 0; i < this->width(); i++) {
    for (unsigned j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      pixel.s = 0;
    }
  }
}

void Image::rotateColor(double degrees) {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      pixel.h += degrees;
      
      if (pixel.h > 360) {
        pixel.h -= 360;
      } else if (pixel.h < 0) {
        pixel.h += 360;
      }
    }
  }
}

void Image::illinify() {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      if (pixel.h - 11 < 216 - pixel.h || pixel.h - 216 > 360 - pixel.h) {
        pixel.h = 11;
      } else {
        pixel.h = 216;
      }
    }
  }
}

void Image::scale(double factor) {
  // Get the new height/width by multiplying with the factor
  unsigned int width = factor * this->width();
  unsigned int height = factor * this->height();
  
  // Copy the original image
  Image image(*this);
  
  this->resize(width, height);
  
  for (unsigned int i = 0; i < width; i++) {
    for (unsigned int j = 0; j < height; j++) {
      // Get the original pixel by dividing with the factor
      HSLAPixel & original = image.getPixel((double) i / factor, (double) j / factor);
      HSLAPixel & pixel = this->getPixel(i, j);
      pixel = original;
    }
  }
}


void Image::scale(unsigned w, unsigned h) {
  // Get the scaling factor for the width and height 
  double w_factor = (double)w / this->width();
  double h_factor = (double)h / this->height();
  if (w_factor < h_factor) {
    scale(w_factor);
  } else{
    scale(h_factor);
  }
}