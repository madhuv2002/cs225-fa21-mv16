/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */

    vector<Point<3>> points;
    map<Point<3>, TileImage*> tiles;
    
    for (auto it = theTiles.begin(); it != theTiles.end(); it++) {
      LUVAPixel pixel = it->getAverageColor();
      Point<3> point = convertToXYZ(pixel);
      points.push_back(point);
      tiles[point] = &*it;
    }
    
    KDTree<3>* tree = new KDTree<3>(points);
    MosaicCanvas* toReturn = new MosaicCanvas(theSource.getRows(), theSource.getColumns());
    for (int i = 0; i < theSource.getRows(); i++) {
      for (int j = 0; j < theSource.getColumns(); j++) {
        LUVAPixel pixel = theSource.getRegionColor(i, j);
        Point<3> temp = convertToXYZ(pixel);
        Point<3> temp2 = tree->findNearestNeighbor(temp);
        TileImage* tile = tiles[temp2];
        toReturn->setTile(i, j, tile);
      }
    }
    delete tree;
    return toReturn;
}

