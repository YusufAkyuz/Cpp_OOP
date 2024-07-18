#ifndef TEST_STUDENT_H
#define TEST_STUDENT_H
#include "Person.h"


class Student : public Person{
private:
    string ID;
public:
    Student(string, string, string,int);

    void printInfo() override;
};


#endif //TEST_STUDENT_H
