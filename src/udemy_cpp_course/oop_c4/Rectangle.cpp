//
// Created by Guber on 14.12.19.
// Udemy C11 Intro to OOPS - Demo 140 Class in C++
//


#include <gtest/gtest.h>
#include "Rectangle.h"

//
Rectangle::Rectangle(int the_length, int the_breadth) : length(the_length), breadth(the_breadth) {
    std::cout << " " << std::endl;
    std::cout << "In Rectangle Base Constructor: " << "length: " << length << "breadth: " << breadth;
}

int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

int Rectangle::area() {
    return length * breadth;
}

int Rectangle::get_length() const {
    return length;
}

void Rectangle::set_length(int new_length) {
    // Initialization + Validation
    if (new_length >= 0) length = new_length;
    else length = 0;
}

int Rectangle::get_breadth() const {
    return breadth;
}


void Rectangle::set_breadth(int new_breadth) {
    // Validation
    breadth = new_breadth;
}

// Demo 140
TEST(UseTheClass, Demo140) {
    Rectangle r1{10, 5};
    Rectangle r2{15, 10};

    EXPECT_EQ(r1.get_breadth(), 5);
    EXPECT_EQ(r1.get_length(), 10);
    EXPECT_EQ(r1.area(), 50);
    EXPECT_EQ(r1.perimeter(), 2 * (10 + 5));

    EXPECT_NE(r1.get_length(), r2.get_length());
}

TEST(Pointer_to_Object, Demo141) {
    // https://stackoverflow.com/questions/2988273/c-pointer-to-objects

    Rectangle r{10, 5};
    Rectangle *p = &r;

    std::cout << " " << std::endl;

    std::cout << "Memory Adress of r: " << p;
    EXPECT_EQ(p, &r);

    // Access members of an object with ->
    EXPECT_EQ(r.get_length(), p->get_length());

    // Modify length with the pointer to object.
    p->set_length(101);
    EXPECT_EQ(p->get_length(), r.get_length());
    EXPECT_EQ(r.get_length(), 101);
}


TEST(Create_Object_in_Heap, Pointer_to_Object_in_Heap) {

    // Creating dynamic object.
    Rectangle *p = new Rectangle{10, 13};

    std::cout << " " << std::endl;
    std::cout << "p: " << p << std::endl;
    std::cout << "&p: " << &p << std::endl;

    EXPECT_EQ(p->get_length(), 10);
    EXPECT_EQ(p->get_breadth(), 13);


    delete p;
    std::cout << "print p after delete p" << p << std::endl;
    std::cout << "p -> get_breadth after delete p: " << p->get_breadth() << std::endl;
}
