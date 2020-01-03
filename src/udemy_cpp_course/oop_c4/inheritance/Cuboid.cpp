//
// Created by Guber on 21.12.19.
//

#include "Cuboid.h"
#include <iostream>

int Cuboid::getHeight() const {
    return height;
}

void Cuboid::setHeight(int height) {
    Cuboid::height = height;
}

int Cuboid::volume() {
    int calculateVolume = get_length() * get_breadth() * getHeight();
    return calculateVolume;
}

Cuboid::Cuboid(int l, int b, int h) {
    std::cout << " " << std::endl;
    std::cout << "In Cuboid Constructor: " << "get_length(): " << get_length() << " - get_breadth: " << get_breadth()
              << " - h: " << h;

    set_length(l);
    set_breadth(b);
    //setHeight(h);
    height = h;
}
