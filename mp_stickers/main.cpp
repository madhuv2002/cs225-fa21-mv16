#include "Image.h"
#include "StickerSheet.h"

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  Image background;
  background.readFromFile("liyue.png");
  Image bird;
  bird.readFromFile("bird.png");
  Image girl;
  girl.readFromFile("ganyu.png");
  Image boy;
  boy.readFromFile("chong.png");
  
  StickerSheet myImage(background, 3);
  myImage.addSticker(bird, 800, 200);
  myImage.addSticker(girl, 1700, 2000);
  myImage.addSticker(boy, 2500, 1000);  
  Image result = myImage.render();
  result.writeToFile("myImage.png");
  return 0;
}
