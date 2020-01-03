//
// Created by Guber on 20.12.19.
//

#include <iostream>
#include <gtest/gtest.h>
#include "Student.h"

TEST(StudentTest, canCreateStudent) {
    Student s1 = Student(123, "Esma", 2, 1, 3);
    Student s2 = Student(124, "Steffi", 1, 3, 4);

    EXPECT_EQ(s1.sum(), 6);
    EXPECT_EQ(s1.grade(), "C");

    EXPECT_EQ(s2.getRoll(), 124);
    EXPECT_EQ(s2.getName(), "Steffi");
    EXPECT_EQ(s2.getMathMarks(), 1);
    EXPECT_EQ(s2.getPhysMarks(), 3);
    EXPECT_EQ(s2.getChemMarks(), 4);

    s2.setName("Stephanie");
    s2.setRoll(126);
    s2.setMathMarks(2);
    s2.setChemMarks(3);
    s2.setPhysMarks(4);

    EXPECT_EQ(s2.getRoll(), 126);
    EXPECT_EQ(s2.getName(), "Stephanie");
    EXPECT_EQ(s2.getMathMarks(), 2);
    EXPECT_EQ(s2.getPhysMarks(), 4);
    EXPECT_EQ(s2.getChemMarks(), 3);
}