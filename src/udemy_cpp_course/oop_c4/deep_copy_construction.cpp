//
// Created by Guber on 19.12.19.
//

class Test {
    int a;
    int *p;

    Test(int x) {
        a = x;
        p = new int[a];
    }

    // Deep Copy Constructor solves the problem of Copy Constructor
    Test(Test &t) {
        a = t.a;    // copies the values of a  stored in object t into this -> a
        // p = t.p  // Shallow copy: this object points to array of object t.
        p = new int[a];
    }
};