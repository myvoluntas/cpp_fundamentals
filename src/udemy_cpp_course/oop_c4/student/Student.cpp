//
// Created by Guber on 20.12.19.
//

#include "Student.h"

int Student::getRoll() const {
    return roll;
}

void Student::setRoll(int roll) {
    Student::roll = roll;
}

const std::string &Student::getName() const {
    return name;
}

void Student::setName(const std::string &name) {
    Student::name = name;
}

int Student::getMathMarks() const {
    return mathMarks;
}

void Student::setMathMarks(int mathMarks) {
    Student::mathMarks = mathMarks;
}

int Student::getPhysMarks() const {
    return physMarks;
}

void Student::setPhysMarks(int physMarks) {
    Student::physMarks = physMarks;
}

int Student::getChemMarks() const {
    return chemMarks;
}

void Student::setChemMarks(int chemMarks) {
    Student::chemMarks = chemMarks;
}

Student::Student(int roll, std::string name, int mathMarks, int physMarks, int chemMarks) {
    this->roll = roll;
    this->name = name;
    this->mathMarks = mathMarks;
    this->physMarks = physMarks;
    this->chemMarks = chemMarks;
}

int Student::sum() {
    int sum_of_marks = getChemMarks() + getPhysMarks() + getMathMarks();
    return sum_of_marks;
}

std::string Student::grade() {
    int total = sum() / 3;
    if (total >= 60) {
        return "A";
    } else if (total >= 40 && total <= 60) {
        return "B";
    } else return "C";
}

