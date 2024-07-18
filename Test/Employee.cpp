#include "Employee.h"

Employee::Employee(string name, string surname, int age,string salary) : Person(name,surname,age) {
    this->salary = salary;
}

void Employee::printInfo() {
    Person::printInfo();
    cout << "Salary = " << salary;
}
