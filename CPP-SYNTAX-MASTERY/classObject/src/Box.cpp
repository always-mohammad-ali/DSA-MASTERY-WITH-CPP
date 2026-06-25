// Box.cpp
#include "Box.h"
#include <iostream>   // for std::cout

// Parameterized constructor
Box::Box(double h, double w, double d)
    : height(h), width(w), depth(d) {}

// Default constructor (sets all to 1.0)
Box::Box() : height(1.0), width(1.0), depth(1.0) {}

// volume() – calculates and prints the volume
void Box::volume() const {
    double vol = height * width * depth;
    std::cout << "Volume = " << vol << std::endl;
}

// Getters
double Box::getHeight() const { return height; }
double Box::getWidth()  const { return width;  }
double Box::getDepth()  const { return depth;  }

// Setter for all dimensions at once
void Box::setDimensions(double h, double w, double d) {
    height = h;
    width  = w;
    depth  = d;
}
