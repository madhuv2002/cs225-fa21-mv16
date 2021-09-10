#include "Image.h"

using namespace cs225;
void Image::lighten() {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      pixel.l += 0.1;
    }
  }
}

void Image::lighten(double amount) {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      pixel.l += amount;
    }
  }
}
    
void Image::darken() {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      pixel.l -= 0.1;
    }
  }
}

void Image::darken(double amount) {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      pixel.l -= amount;
    }
  }
}
    
void Image::saturate() {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      pixel.s += 0.1;
    }
  }
}

void Image::saturate(double amount) {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      pixel.s += amount;
    }
  }
}
    
void Image::desaturate() {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      pixel.s -= 0.1;
    }
  }
}

void Image::desaturate(double amount) {
  for (unsigned int i = 0; i < this->width(); i++) {
    for (unsigned int j = 0; j < this->height(); j++) {
      HSLAPixel & pixel = this->getPixel(i, j);
      pixel.s -= amount;
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
      }
    }
  }
}

void Image::illinify() {
  for (unsigned i = 0; i < this->width(); i++) {
    for (unsigned j = 0; j < this->height(); j++) {
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
  
}


void Image::scale(unsigned w, unsigned h) {
  

}