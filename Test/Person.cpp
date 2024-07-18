#include "Person.h"

Person::Person() {

}
Person::Person(string name,string surname, int age) {
    this->name = name;
    this->surname = surname;
    this->age = age;
}

void Person::printInfo() {
    cout << "Name : " << name << "\nSurname : " << surname + "\nAge : " << age << endl;
}
