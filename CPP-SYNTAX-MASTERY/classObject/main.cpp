// main.cpp
#include "Box.h"
#include <iostream>

int main() {
    // Create boxes with arbitrary dimensions
    Box box1(3.0, 4.0, 5.0);
    Box box2(2.5, 3.5, 1.2);
    Box box3;          // uses default constructor (1x1x1)

    // Display volumes
    std::cout << "Box 1: ";
    box1.volume();

    std::cout << "Box 2: ";
    box2.volume();

    std::cout << "Box 3 (default): ";
    box3.volume();

    // Change dimensions of box3
    box3.setDimensions(10.0, 2.0, 3.0);
    std::cout << "Box 3 after update: ";
    box3.volume();

    return 0;
}
