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
  png_ = png;
  start_ = start;
  current_ = start;
  tolerance_ = tolerance;
  traversal_ = traversal;
  
  visited_.resize(png_.width());
  for(unsigned int i = 0; i < png_.width(); i++) {
    visited_[i].resize(png_.height());
  }
  for(unsigned int i = 0; i < png_.width(); i++) {
    for(unsigned int j = 0; j < png_.height(); j++) {
      visited_[i][j] = false;
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
  Point curr = traversal_->pop(); 
  
  Point right = Point(curr.x + 1, curr.y); 
  Point below = Point(curr.x, curr.y + 1);
  Point left = Point(curr.x - 1, curr.y); 
  Point above = Point(curr.x, curr.y - 1); 
  HSLAPixel & p1 = png_.getPixel(start_.x, start_.y);
  
  if (right.x < png_.width() && visited_[right.x][right.y] == false) {
      HSLAPixel & p2 = png_.getPixel(right.x, right.y);
      if(calculateDelta(p1, p2) < tolerance_) { 
        traversal_->add(right); 
    }
  }
  
  if (below.y < png_.height() && visited_[below.x][below.y] == false) {
    HSLAPixel & p2 = png_.getPixel(below.x, below.y);
    if(calculateDelta(p1, p2) < tolerance_) { 
      traversal_->add(below); 
    }
  }
  
  if (left.x < png_.width() && left.x >= 0 && visited_[left.x][left.y] == false) {
    HSLAPixel & p2 = png_.getPixel(left.x, left.y);
    if(calculateDelta(p1, p2) < tolerance_) { 
      traversal_->add(left); 
    }
  }
  
  if (above.y < png_.height() && above.y >= 0 && visited_[above.x][above.y] == false) {
    HSLAPixel & p2 = png_.getPixel(above.x, above.y);
    if(calculateDelta(p1, p2) < tolerance_) { 
      traversal_->add(above); 
    }
  }
  
  
  visited_[curr.x][curr.y] = true;
  while(!traversal_->empty() && (visited_[traversal_->peek().x][traversal_->peek().y])) {
    traversal_->pop(); 
  }
  if(traversal_->empty() == false) { 
    current_ = traversal_->peek();
  } else {
    traversal_ = NULL;
  }
  return *this;
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

