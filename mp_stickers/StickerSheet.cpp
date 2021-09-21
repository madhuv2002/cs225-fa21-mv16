#include "StickerSheet.h"
#include "cs225/PNG.h"

using namespace cs225;

StickerSheet::StickerSheet(const Image &picture, unsigned max) {
  base_picture_ = picture;
  max_ = max;
  images_ = new Image*[max_];
  for (unsigned int i = 0; i < max_; i++) {
    images_[i] = NULL;
    x_pos_.push_back(0);
    y_pos_.push_back(0);
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
  delete[] images_;
  images_ = NULL;
}

StickerSheet::StickerSheet(const StickerSheet &other) {
  copy(other);
}

void StickerSheet::copy(const StickerSheet &other) {
  base_picture_ = other.base_picture_;
  max_ = other.max_;
  images_ = new Image*[max_];
  index_ = other.index_;
  x_pos_.clear();
  x_pos_.resize(max_);
  y_pos_.clear();
  y_pos_.resize(max_);
  for (unsigned i = 0; i < index_; i++) {
    if (other.images_[i] != NULL) {
      images_[i] = new Image(*(other.images_[i]));
      x_pos_[i] = other.x_pos_[i];
      y_pos_[i] = other.y_pos_[i];
    }
  }
}

const StickerSheet& StickerSheet::operator=(const StickerSheet &other) {
  clear();
  copy(other);
  return *this;
}

void StickerSheet::changeMaxStickers(unsigned max) {
  if (index_ >= max){ 
    // if the number of stickers is > max, delete the lost stickers
    for (unsigned i = max; i < index_; i++) { 
      if (images_[i] != NULL) {
        delete images_[i];
        images_[i] = NULL;
      } 
    }
    // update the number of stickers
    index_ = max; 
    max_ = max;
  } else if (index_ < max) {   
    Image** temp = new Image*[max]; 
    std::vector<unsigned> tempx;
    std::vector<unsigned> tempy;
    for(unsigned i = 0; i < max; i++) { 
      temp[i] = NULL; 
      tempx.push_back(0);
      tempy.push_back(0);
    } 
    for (unsigned i = 0; i < index_; i++) {
      if (images_[i] != NULL) {
        temp[i] = new Image(*(images_[i])); 
        tempx[i] = x_pos_[i]; 
        tempy[i] = y_pos_[i]; 
      }
    } 
    max_ = max;
    clear();
    images_ = temp;
    x_pos_ = tempx;
    y_pos_ = tempy;
    temp = NULL;
  }
}

int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y) { 
  if (index_ < max_) {
    for (unsigned i  = 0; i < max_; i++) {
      if (i == index_) {
        images_[i] = new Image(sticker);
        x_pos_[i] = x;
        y_pos_[i] = y;
        index_++;
        return i;
      }
    }
  }
  return -1;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) { 
  if(index >= index_) { 
    return false; 
  } else { 
    x_pos_[index] = x; 
    y_pos_[index] = y; 
    return true; 
  }
}

void StickerSheet::removeSticker(unsigned index) { 
  if(index < index_) {
    // Move stickers down by 1 so the lowest index is at the end
    delete images_[index];
    for(unsigned i = index; i < (index_ - 1); i++) { 
      images_[i] = images_[i + 1]; 
      x_pos_[i] = x_pos_[i + 1]; 
      y_pos_[i] = y_pos_[i + 1]; 
    } 
    images_[index_ - 1] = NULL; 
    index_ --; 
  }
}

Image * StickerSheet::getSticker(unsigned index) {
  if (index >= index_) { 
    return NULL;
  } else {
    return images_[index];
  }
}


Image StickerSheet::render() const {
  Image base_image = (base_picture_);
  unsigned maxw = base_image.width();
  unsigned maxh = base_image.height();
  // get the max height and width for the box
  for (unsigned i = 0; i < index_; i++) {
    unsigned width = images_[i]->width();
    unsigned height = images_[i]->height();
    if (width + x_pos_[i] > maxw) {
      maxw = width + x_pos_[i];
    }
    if (height + y_pos_[i] > maxh) {
      maxh = height + y_pos_[i];
    }
  }
  
  base_image.resize(maxw, maxh);
  
  for (unsigned i = 0; i < index_; i++) {
    for (unsigned x = 0; x < images_[i]->width(); x++) {
      for (unsigned y = 0; y < images_[i]->height(); y++) {
        HSLAPixel & s_pix = base_image.getPixel(x + x_pos_[i], y + y_pos_[i]);
        HSLAPixel & i_pix = images_[i]->getPixel(x, y);
        if (i_pix.a != 0) {
          s_pix = i_pix;
        }
      }
    }
  }
  return base_image;
  
}