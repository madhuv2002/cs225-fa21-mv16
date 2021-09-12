#include "StickerSheet.h"
#include "cs225/PNG.h"

using namespace cs225;

StickerSheet::StickerSheet(const Image &picture, unsigned max) {
  
}
StickerSheet::~StickerSheet() {
  
}
StickerSheet::StickerSheet(const StickerSheet &other) {
  
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