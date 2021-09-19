#include "Image.h"
#include "StickerSheet.h"

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //
  Image background;
  background.readFromFile("alma.png");
  Image car;
  car.readFromFile("weaslycar.png");
  Image harry;
  harry.readFromFile("harry.png");
  Image draco;
  draco.readFromFile("malfoy.png");
  Image voldemort;
  voldemort.readFromFile("voldemort.png");
  
  StickerSheet myImage(background, 4);
  myImage.addSticker(draco, 50, 350);  
  myImage.addSticker(harry, 700, 350);
  myImage.addSticker(car, 100, 40);
  myImage.addSticker(voldemort, 322, 0);
  Image result = myImage.render();
  result.writeToFile("myImage.png");
  return 0;
}
