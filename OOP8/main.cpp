#include <iostream>
using namespace std;

class Base{
public:
    int data[100];
    int size;
    Base():size(0){}
    void add(int value){
        data[size] = value;
        size++;
    }
    void print()const{
        cout << "Base Print" << endl;
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

};
class Derived : public Base{
public:
    float data[100];
    int size;
    Derived():size(0){}


    void add(float value){
        data[size] = value;
        size++;
    }

    void print()const{
        Base::print();
        cout << "Derived Print" << endl;
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    void addInt(int value){
        Base::add(value);//Baseden metod çağırma işlemini bu şekilde yapabiliriz
    }
};

int main() {

    Base base;
    base.print();
    base.add(10);
    base.add(20);
    base.add(30);
    base.print();

    cout << "hı" << endl;
    

    //Aşağıdaki kodlardanda anlaşılacağı gibi deriveddan nesne oluşturulunca dolaylı olarak
    //Baseden de nesne oluşturulumuş oluyoruz.

    Derived derived;
    derived.add(3.4);
    derived.add(2.5);
    derived.addInt(5);
    derived.addInt(6);
    derived.print();





    return 0;
}
