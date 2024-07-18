#include <iostream>
using namespace std;
class A{
private:
    int priA;
protected:
    int proA;
public:
    int pubA;

};
class B : protected A{
private:
    int priB;
protected:
    int proB;
public:
    int pubB;

};
class C : protected B{
private:
    int priC;
protected:
    int proC;
public:
    int pubC;

};

class Base{
public:
    int * ptr;
    Base(int i = 0) {
        cout << "Base Kurucu" << endl;
        ptr = new int (i);
    }
    Base(const Base& b) {
        cout << "Base Copy Kurucu" << endl;
        ptr = new int (*b.ptr);
    }
    Base& operator=(const Base& ref) {
        cout << "Base = oprt overloaded" << endl;
        delete ptr;
        ptr = new int (*ref.ptr);
        return *this;
    }
    ~Base(){
        cout << "Base Destructor" << endl;
        delete ptr;
    }

};
class Derived : public Base{
public:
    int * ptr2;
    Derived(int i = 0, int j = 1) : Base(i){
        cout << "Derived Kurucu" << endl;
        ptr2 = new int(j);
    }

    Derived& operator=(const Derived& ref) {
        cout << "Derived = oprt overloaded" << endl;
        Base::operator=(ref);//Bunu yapıcan ki baseden türeyen nesne içinde yeni bellek tahsisi gerçekleşsin
        delete ptr2;
        ptr2 = new int (*ref.ptr2);
        return *this;
    }
    ~Derived(){
        cout << "Derived Destructor" << endl;
        delete ptr2;
    }

};



int main() {

    /*
    Base base(10);
    Base base2 = base;
    cout << base.ptr << " " << *base.ptr << endl;
    cout << base2.ptr << " " << *base2.ptr << endl;
    */
    Derived derived(100, 200);
    cout << derived.ptr << "\t" << derived.ptr2 << endl;
    cout << *derived.ptr << "\t" << *derived.ptr2 << endl;
    Derived derived2(300,400);

    //Atama operatörünü overload etmemizdeki amaç class içerisinde pointer türünden bir değer olması

    derived2 = derived;
    cout << derived2.ptr << "\t" << derived2.ptr2 << endl;
    cout << *derived2.ptr << "\t" << *derived2.ptr2 << endl;



    return 0;
}
