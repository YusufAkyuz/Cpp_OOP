//
// Created by Yusuf Akyüz on 18.01.2024.
//

#include "Student.h"

Student::Student(string name, string surname, string ID,int age) : Person(name,surname,age) {
    this->ID = ID;
}

void Student::printInfo() {
    Person::printInfo();
    cout << "ID = " << ID << endl;
}
