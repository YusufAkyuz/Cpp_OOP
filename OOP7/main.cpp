#include <iostream>
using namespace std;

class Human{
protected:
    string id;
    string name;
    string surname;
public:
    Human(string id, string name, string surname){
        this->id = id;
        this->name = name;
        this->surname = surname;
    }
    const string &getId() const {
        return id;
    }

    void setId(const string &id) {
        Human::id = id;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Human::name = name;
    }

    const string &getSurname() const {
        return surname;
    }

    void setSurname(const string &surname) {
        Human::surname = surname;
    }
    void printInfo(){
        cout << "Name = " << name << "\nSurname = " << surname << "\nId = " << id << endl;
    };
};
class Student : public Human{
private:
    string department;
public:
    Student(string id, string name, string surname, string department)
            : Human(id, name, surname) {
        this->department = department;

    }

    const string &getDepartment() const {
        return department;
    }

    void setDepartment(const string &department) {
        Student::department = department;
    }
    void printInfo(){
        cout << "Name = " << name << "\nSurname = " << surname << "\nId = " << id << "\nDepartment = " << department << endl;
    }
};

int main() {

    Human human("1234","Yusuf","Akyuz");
    human.printInfo();

    Student student("5678", "Ali", "Akyuz", "CS");
    student.printInfo();

    //Bellekte ne kadar alan tahsis edildiğine bakacak olursak
    cout << sizeof (human) << endl;
    cout << sizeof (student) << endl;

    return 0;
}
