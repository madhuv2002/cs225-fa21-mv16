/**
 * @file Image.h
 * Contains your declaration of the interface for the Image class.
 */

#pragma once

#include "PNG.h"

namespace cs225 {
  class Image : public PNG  {
    public {
    /**
     * Lighten an Image by increasing the luminance
     * of every pixel by 0.1.
     */
    void lighten();
    
    /**
     * Lighten an Image by increasing the luminance
     * of every pixel by amount.
     */
    void lighten(double amount);
    
    /**
     * Darken an Image by decreasing the luminance
     * of every pixel by 0.1.
     */    
    void darken();
    
    /**
     * Darken an Image by decreaasing the luminance
     * of every pixel by amount.
     */
    void darken(double amount);
    }
  };
}

