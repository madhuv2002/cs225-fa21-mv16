/* Your code here! */
#pragma once

#include "cs225/PNG.h"
#include "dsets.h"
#include <vector>
#include <map>
#include <stack>

using namespace cs225;
using namespace std;

class SquareMaze {
public:
  SquareMaze();
  void makeMaze(int width, int height);
  bool canTravel(int x, int y, int dir) const;
  void setWall(int x, int y, int dir, bool exists);
  vector<int> solveMaze();
  PNG* drawMaze() const;
  PNG* drawMazeWithSolution();
  
  vector<pair<bool, bool>> maze_walls;
  DisjointSets dsets;
  int width_;
  int height_;
};