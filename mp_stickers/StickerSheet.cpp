#include "StickerSheet.h"
#include "cs225/PNG.h"

using namespace cs225;

StickerSheet::StickerSheet(const Image &picture, unsigned max) {
  max_ = max;
  images_ = new Image*[max_];
  x_coordinate_ = new int[max_];
  y_coordinate_ = new int[max_];
  for (int i = 0; i < max_; i++) {
    images_[i] = NULL;
  }
}
StickerSheet::~StickerSheet() {
  clear();
}

StickerSheet::clear() {
  max_ = 0;
  delete[] images;
  delete[] x_coordinate_;
  delete[] y_coordinate;
}

StickerSheet::StickerSheet(const StickerSheet &other) {
  copy(other);
}

StickerSheet::copy(const StickerSheet &other) {
  max_ = other.max_;
  images = other.images[];
  x_coordinate_ = other.x_coordinate_;
  y_coordinate = other.y_coordinate_;
}
const StickerSheet& StickerSheet::operator=(const StickerSheet &other) {
  return other;
}
void StickerSheet::changeMaxStickers(unsigned max) {
  
}
int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y) {
  return -1;
}
bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
  return true;
}
void StickerSheet::removeSticker(unsigned index) {
  
}
Image* StickerSheet::getSticker(unsigned index) {
  Image* i = new Image();
  return i;
}
Image StickerSheet::render() const {
  Image* i = new Image();
  return *i;
    
}