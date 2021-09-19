#include "Image.h"
#include "StickerSheet.h"

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  Image background;
  background.readFromFile("liyue.png");
  Image car;
  car.readFromFile("weaslycar.png");
  Image girl;
  girl.readFromFile("ganyu.png");
  Image boy;
  boy.readFromFile("chong.png");
  
  StickerSheet myImage(background, 3);
  myImage.addSticker(boy, 160, 180);  
  myImage.addSticker(girl, 250, 80);
  myImage.addSticker(car, 20, 20);
  Image result = myImage.render();
  result.writeToFile("myImage.png");
  return 0;
}
