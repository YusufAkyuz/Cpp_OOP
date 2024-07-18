#ifndef TEST_PERSON_H
#define TEST_PERSON_H
#include <iostream>
using namespace std;

class Person {

private:
    string name;
    string surname;
    int age;
public:
    Person();
    Person(string, string, int);

    virtual void printInfo();
};


#endif //TEST_PERSON_H
