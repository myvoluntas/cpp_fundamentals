//
// Created by Guber on 22.12.19.
//

#include "Base.h"

Base::Base() {
    std::cout << " " << std::endl;
    std::cout << "In Default of Base Constructor: Base()";
}


Base::Base(int x) {
    std::cout << " " << std::endl;
    std::cout << "In Param of Base Constructor: Base(int x) " << x << std::endl;
}
