/* Your code here! */

#include <cstdlib>
#include "maze.h"
#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include "dsets.h"
using namespace std;
using namespace cs225;


SquareMaze::SquareMaze() {
}

void 	SquareMaze::makeMaze (int width, int height){
  width_ = width;
  height_ = height;
  dsets.addelements(width * height);
  for(int i = 0; i< width*height; i++) {
    maze_walls.push_back(std::pair<bool, bool>(true, true)); 
  }
  
  
  while(dsets.size(0) < width_ * height_) {
    int x = rand() % width_;
    int y = rand() % height_;
    
    if(rand() % 2 == 1) {
      if(x  < width_ - 1 && dsets.find(x + y * width_) != dsets.find((1 + x) + y * width_)) {
        maze_walls[y * width_ + x].first = false;
        dsets.setunion(x + y * width_, 1 + x + y * width_);
      }
    } else {
      if(y < height_ - 1 && dsets.find(x + y * width_) != dsets.find(x + (y + 1) * width_)) {
        maze_walls[y * width_ + x].second = false;
        dsets.setunion(x + y * width_, x + (y + 1) * width_);
      }
    }
  }
}

bool SquareMaze::canTravel (int x, int y, int dir) const {
  // can move right
  if (dir == 0) {
    return !(maze_walls[y * width_ + x].first == true);
  }
  // can move down
  if (dir == 1) {
    return !(maze_walls[x + y * width_].second == true);
  }
  // can move left
  if (dir == 2) {
    if (x == 0) {
      return false;
    }
    return !(maze_walls[x + y * width_ - 1].first == true);
  }
  // can move up
  if (dir == 3) {
    if (y == 0) {
      return false;
    }
    return !(maze_walls[x + (y-1) * width_].second == true);
  }
  
  return false;
}

void SquareMaze::setWall(int x, int y, int dir, bool exists) {
  if (dir == 0) {
    maze_walls[y * width_ + x].first = exists;
  }
  if (dir == 1) {
    maze_walls[y * width_ + x].second = exists;
  }
}

std::vector<int> SquareMaze::solveMaze(){
  int curr;
  queue<int> traversal;
  traversal.push(0);
  vector<int> answer;
  vector<bool> visited; 
  // vector to store the distance at each point
  vector<int> distance;
  vector<int> pos;
  visited.push_back(0); 
  for(int i = 0; i < width_ * height_; i++){
    visited.push_back(false); 
    distance.push_back(0);
    pos.push_back(-1);
  }
  visited[0] = 0;
  while(!traversal.empty()){
    curr = traversal.front();
    int x = curr % width_;
    int y = curr / width_;
    traversal.pop();
    
    // check whether we can move in any direction and if it has been visited
    if(canTravel(x, y, 0) && visited[curr + 1] == false) {
      traversal.push(curr + 1);
      visited[curr + 1] = true;
      pos[curr + 1] = curr;
      // increment the distance for each step
      distance[curr + 1] = distance[curr] + 1;
    }
    if(canTravel(x, y, 1) && visited[curr + width_] == false) {
      traversal.push(curr + width_);
      visited[curr + width_] = true;
      pos[curr + width_] = curr;
      distance[curr + width_] = distance[curr] + 1;
    }
    
    if(canTravel(x, y, 2) && visited[curr - 1] == false) {
      traversal.push(curr - 1);
      visited[curr - 1] = true;
      pos[curr - 1] = curr;
      distance[curr - 1] = distance[curr] + 1;
    }
    
    if(canTravel(x, y, 3) && visited[curr - width_] == false){
      traversal.push(curr - width_);
      visited[curr - width_] = true;
      pos[curr - width_] = curr;
      distance[curr - width_] = distance[curr] + 1;
    }
  }
  // get the bottom right cell as the one with the longest path
  int longest = 0;
  // move along the bottom row and find the largest val
  for (int x = 0; x < width_; x++) {
    int temp = distance[longest];
    if(distance[width_ * (height_ - 1) + x] > temp){
      longest = width_ * (height_ - 1) + x;
    }
  }
  curr = longest; 
  stack<int> temp;
  while (curr != 0) {
    if(pos[curr] == curr - 1){
      temp.push(0);
    }
    if(pos[curr] == curr - width_){
      temp.push(1);
    }
    if(pos[curr] == curr + 1){
      temp.push(2);
    }
    if(pos[curr] == curr + width_) {
      temp.push(3);
    }
    curr = pos[curr];
  }
  int size = temp.size();
  for (int i = 0; i < size; i++) {
    answer.push_back(temp.top());
    temp.pop();
  }
  return answer;
  
}

PNG* SquareMaze::drawMaze() const{
  PNG* result = new PNG(width_ * 10 + 1, height_ * 10 + 1);
  for(int x = 0; x < width_; x++) {
    for(int y = 0; y < height_; y++) {
      if(y == 0) {
        for(unsigned k = 0; k < 10; k++){
          if((x * 10 + k < 1) || (x * 10 + k > 9)) {
            HSLAPixel & cur_pixel = result->getPixel(x * 10 + k, 0);
            cur_pixel.l = 0;
          }
        }
      }
      if(x == 0) {
        for(unsigned k = 0; k < 10;k++) {
          HSLAPixel & cur_pixel = result->getPixel(0, y * 10 + k);
          cur_pixel.l = 0;
        }
      }
      if(maze_walls[y * width_ + x].first) {
        for(unsigned k = 0; k <= 10;k++) {
          HSLAPixel & cur_pixel = result->getPixel((x + 1) * 10, y * 10 + k);
          cur_pixel.l = 0;
        }
      }
      if(maze_walls[y * width_ + x].second) {
        for(unsigned k = 0; k <= 10;k++) {
          HSLAPixel & cur_pixel = result->getPixel(x * 10 + k, (y + 1) * 10);
          cur_pixel.l = 0;
        }
      }
    }
  }
  return result;
  
}

PNG* SquareMaze::drawMazeWithSolution(){
  PNG* result = drawMaze();
  std::vector<int> solution = solveMaze();
  int x = 5;
  int y = 5;
  
  for(unsigned i=0; i < solution.size(); i++) {
    // right
    if(solution[i] == 0){
      for(int i = 0; i <= 10; i++) {
        result->getPixel(x + i, y) = HSLAPixel(0, 1, 0.5, 1);
      }
      x += 10;
    }
    if(solution[i] == 1) {
      // down
      for(int i = 0; i <= 10; i++) {
        result->getPixel(x, y + i) = HSLAPixel(0, 1, 0.5, 1);
      }
      y += 10;
    }
    // left
    if(solution[i] == 2){
      for(int i = 0; i <= 10; i++) {
        result->getPixel(x - i, y) = HSLAPixel(0, 1, 0.5, 1);
      }
      x -= 10;
    }
    // up
    if(solution[i] == 3){
      for(int i = 0; i <= 10; i++) {
        result->getPixel(x, y - i) = HSLAPixel(0, 1, 0.5, 1);
      }
      y -= 10;
    }
  }
  
  for(int i = 1; i <= 9; i++) {
    HSLAPixel& p = result->getPixel((x / 10) * 10 + i, height_ * 10);  
    p.l = 1;
  }
  return result;
}