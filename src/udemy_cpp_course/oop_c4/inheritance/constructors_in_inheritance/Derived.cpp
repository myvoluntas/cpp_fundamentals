//
// Created by Guber on 22.12.19.
//

#include "Derived.h"
#include <iostream>

Derived::Derived() {
    std::cout << " " << std::endl;
    std::cout << "In Default of Derived: Derived() " << std::endl;
}

Derived::Derived(int x) {
    std::cout << " " << std::endl;
    std::cout << "In Default of Derived: Derived(int x) " << x << std::endl;
}

Derived::Derived(int x, int a) : Base(x) {
    std::cout << "In Param of Derived: Derived(int x, int a): Base(x) " << "x: " << x << " a: " << a << std::endl;
    //std::cout << "calls also Base(int x) in Base " << "x: " << x << std::endl;
}
