cmake_minimum_required(VERSION 3.15)
project(cpp_fundamentals)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)

add_executable(cpp_fundamentals main.cpp src/udemy_cpp_course/fundamentals/operators.cpp src/udemy_cpp_course/fundamentals/operators.h src/udemy_cpp_course/oop_c4/Rectangle.cpp src/udemy_cpp_course/oop_c4/Rectangle.h src/udemy_cpp_course/loops/loops.cpp src/udemy_cpp_course/types/reference_types.cpp src/udemy_cpp_course/functions/parameter_passing_methods.cpp src/udemy_cpp_course/fundamentals/return_multiple_values.cpp src/udemy_cpp_course/functions/static_variables.cpp src/udemy_cpp_course/oop_c4/Complex.cpp src/udemy_cpp_course/oop_c4/Complex.h src/udemy_cpp_course/oop_c4/deep_copy_construction.cpp src/udemy_cpp_course/oop_c4/student/StudentTest.cpp src/udemy_cpp_course/oop_c4/student/Student.cpp src/udemy_cpp_course/oop_c4/student/Student.h src/udemy_cpp_course/oop_c4/rational/Rational.cpp src/udemy_cpp_course/oop_c4/rational/Rational.h src/udemy_cpp_course/oop_c4/rational/RationalTest.cpp src/udemy_cpp_course/tdd/supermarket_checkout/Checkout.cpp src/udemy_cpp_course/tdd/supermarket_checkout/Checkout.h src/udemy_cpp_course/tdd/supermarket_checkout/CheckoutTest.cpp src/udemy_cpp_course/oop_c4/inheritance/Cuboid.cpp src/udemy_cpp_course/oop_c4/inheritance/Cuboid.h src/udemy_cpp_course/oop_c4/inheritance/CuboidTests.cpp src/udemy_cpp_course/oop_c4/inheritance/constructors_in_inheritance/Base.cpp src/udemy_cpp_course/oop_c4/inheritance/constructors_in_inheritance/Base.h src/udemy_cpp_course/oop_c4/inheritance/constructors_in_inheritance/Derived.cpp src/udemy_cpp_course/oop_c4/inheritance/constructors_in_inheritance/Derived.h src/udemy_cpp_course/oop_c4/inheritance/constructors_in_inheritance/DerivedTests.cpp src/udemy_cpp_course/oop_c4/base_class_object_derived_class_object_c14/base_and_derived_class_pointer.cpp src/algorithms_udemy/c5_recursion/recursive_functions.cpp src/algorithms_udemy/c7_array_adt/cpp/array_adt.cpp src/algorithms_udemy/c7_array_adt/c/array_adt_version_c.c src/algorithms_udemy/c7_array_adt/c/array_adt_version_c.h src/algorithms_udemy/c7_array_adt/c/testing_c_array.cpp)

#add_executable(cpp_fundamentals ${SOURCE_FILES})

enable_testing()

target_link_libraries(cpp_fundamentals gtest gtest_main)
include_directories(src)
include_directories(src/udemy_cpp_course)