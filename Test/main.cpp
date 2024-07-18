#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Employee.h"
using namespace std;


int main() {

    Person person("Yusuf", "Akyuz", 21);
    person.printInfo();
    Student student("Yusuf", "Akyuz", "21050111054", 21);
    student.printInfo();
    Employee employee("Yusuf", "Akyuz", 21, "35000");
    employee.printInfo();



    return 0;
}
