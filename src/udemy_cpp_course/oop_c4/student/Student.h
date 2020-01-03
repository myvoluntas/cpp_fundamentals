//
// Created by Guber on 20.12.19.
//

#ifndef CPP_FUNDAMENTALS_STUDENT_H
#define CPP_FUNDAMENTALS_STUDENT_H

#include <string>
#include <string>

class Student {

    int roll;
    std::string name;
    int mathMarks;
    int physMarks;
    int chemMarks;

public:
    Student(int roll, std::string name, int mathMarks, int physMarks, int chemMarks);


    int sum();

    std::string grade();

    int getRoll() const;

    void setRoll(int roll);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getMathMarks() const;

    void setMathMarks(int mathMarks);

    int getPhysMarks() const;

    void setPhysMarks(int physMarks);

    int getChemMarks() const;

    void setChemMarks(int chemMarks);


};


#endif //CPP_FUNDAMENTALS_STUDENT_H
