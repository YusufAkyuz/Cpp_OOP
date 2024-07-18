#ifndef TEST_EMPLOYEE_H
#define TEST_EMPLOYEE_H
#include "Person.h"
#include <iostream>
using namespace std;


class Employee : public Person{
private:
    string salary;
public:
    Employee(string , string , int, string);
    virtual void printInfo();
};


#endif
