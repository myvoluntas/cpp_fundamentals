//
// Created by Guber on 21.12.19.
//

#ifndef CPP_FUNDAMENTALS_CUBOID_H
#define CPP_FUNDAMENTALS_CUBOID_H

#include "../Rectangle.h"


class Cuboid : public Rectangle {
private:
    int height;
public:
    Cuboid(int l = 1, int b = 1, int h = 1);

    int getHeight() const;

    void setHeight(int height);

    int volume();
};


#endif //CPP_FUNDAMENTALS_CUBOID_H
