#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() {
  /** @todo [Part 1] */
  traversal_ = NULL;
}

ImageTraversal::Iterator::Iterator(PNG png, Point start, double tolerance, ImageTraversal* traversal) {
  /** @todo [Part 1] */
  traversal_ = traversal;
  png_ = png;
  start_ = start;
  current_ = start;
  tolerance_ = tolerance;
  
  visited.resize(png_.width());
  for (unsigned i = 0; i < visited.size(); i++) {
    visited[i].resize(png_.height());
  }
  for (unsigned i = 0; i < png_.width(); i++) {
    for (unsigned j = 0; j < png_.height(); j++) {
      visited[i][j] = false;
    }
  }
  
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
  Point temp = traversal_->pop();
  
  Point right(temp.x + 1, temp.y);
  Point below(temp.x, temp.y + 1);
  Point left(temp.x - 1, temp.y);
  Point above(temp.x, temp.y - 1);
  
  HSLAPixel & p1 = png_.getPixel(start_.x, start_.y);
  
  if(right.x < png_.width() && visited[right.x][right.y] == false){
    HSLAPixel & p2 = png_.getPixel(right.x, right.y);
    double delta = calculateDelta(p2, p1);
    if ((delta < tolerance_)) {
      traversal_->add(right);
    }
  }
  
  if(below.y < png_.height() && visited[below.x][below.y] == false){
    HSLAPixel & p2 = png_.getPixel(below.x, below.y);
    double delta = calculateDelta(p2, p1);
    if ((delta < tolerance_)) {
      traversal_->add(below);
    }
  }
  
  if(left.x > 0 && left.x < png_.width() && visited[left.x][left.y] == false){
    HSLAPixel & p2 = png_.getPixel(left.x, left.y);
    double delta = calculateDelta(p2, p1);
    if ((delta < tolerance_)) {
      traversal_->add(left);
    }
  }
  
  if(above.y > 0 && above.y < png_.height() && visited[above.x][above.y] == false){
    HSLAPixel & p2 = png_.getPixel(above.x, above.y);
    double delta = calculateDelta(p2, p1);
    if ((delta < tolerance_)) {
      traversal_->add(above);
    }
  }
  visited[temp.x][temp.y] = true;
  
  while(!traversal_->empty() && visited[traversal_->peek().x][traversal_->peek().y]){
    traversal_->pop();
  }

  if(traversal_->empty()) {
    traversal_ = NULL;
    return *this;
  } else {
    current_ = traversal_->peek();
    return *this;
  }
}


/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return current_;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  return !(traversal_ == other.traversal_);
}

