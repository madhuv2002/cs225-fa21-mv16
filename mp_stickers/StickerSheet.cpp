#include "StickerSheet.h"
#include "cs225/PNG.h"

using namespace cs225;

StickerSheet::StickerSheet(const Image &picture, unsigned max) {
  base_picture_ = picture;
  max_ = max;
  images_ = new Image*[max_];
  x_coordinate_ = new int[max_];
  y_coordinate_ = new int[max_];
  for (unsigned int i = 0; i < max_; i++) {
    images_[i] = NULL;
  }
  index_ = 0;
}
StickerSheet::~StickerSheet() {
  clear();
}

void StickerSheet::clear() {
  for (unsigned i = 0; i < index_; i++) {
    delete images_[i];
  }
  max_ = 0;
  delete[] images_;
  delete[] x_coordinate_;
  delete[] y_coordinate_;
}

StickerSheet::StickerSheet(const StickerSheet &other) {
  copy(other);
}

void StickerSheet::copy(const StickerSheet &other) {
  base_picture_ = other.base_picture_;
  max_ = other.max_;
  images_ = other.images_;
  index_ = other.index_;
  x_coordinate_ = other.x_coordinate_;
  y_coordinate_ = other.y_coordinate_;
  for (unsigned i = 0; i < max_; i++) {
    images_[i] = other.images_[i];
    x_coordinate_[i] = other.x_coordinate_[i];
    y_coordinate_[i] = other.y_coordinate_[i];
  }
}

const StickerSheet& StickerSheet::operator=(const StickerSheet &other) {
  clear();
  copy(other);
  return *this;
}

void StickerSheet::changeMaxStickers(unsigned max) {
  if (max < max_) {
    for (unsigned int i = max; i < max_; i++) {
      removeSticker(i);
    }
  } else {
    Image** temp = new Image*[max];
    int * tempXpos = new int[max];
    int * tempYpos = new int[max];
    for (unsigned int i = 0; i < index_; i++) {
      temp[i] = images_[i];
      tempXpos[i] = x_coordinate_[i];
      tempYpos[i] = y_coordinate_[i];
    }
  }
}

int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y) {
  if (index_ < max_) {
    for (unsigned int i = 0; i < max_; i++) {
      images_[i] = new Image(sticker);
      x_coordinate_[i] = x;
      y_coordinate_[i] = y;
      index_++;
      return i;
    }
  }
  return -1;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
  if (index < 0 || index > max_) {
    return false;
  } else {
    x_coordinate_[index] = x;
    y_coordinate_[index] = y;
    return true;
  }
}
void StickerSheet::removeSticker(unsigned index) {
  if (index >= max_ || index < 0) {
    return;
  }
  delete images_[index];
  x_coordinate_[index] = 0;
  y_coordinate_[index] = 0;
}
Image* StickerSheet::getSticker(unsigned index) {
  if (index > max_) {
    return NULL;
  } else {
    return images_[index];
  }
}
Image StickerSheet::render() const {
  Image* base_image = new Image(base_picture_);
  return *base_image;
    
}