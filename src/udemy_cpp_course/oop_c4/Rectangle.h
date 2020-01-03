//
// Created by Guber on 14.12.19.
//

#ifndef CPP_FUNDAMENTALS_RECTANGLE_H
#define CPP_FUNDAMENTALS_RECTANGLE_H

#include <string>


class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int the_length = 1, int the_breadth = 1);

    int get_length() const;

    int get_breadth() const;

    void set_length(int new_length);

    void set_breadth(int new_breadth);

    int area();

    int perimeter();
};


#endif //CPP_FUNDAMENTALS_RECTANGLE_H
