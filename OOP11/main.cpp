#include <iostream>
using namespace std;
class Mother{
private:
    string name;
public:
    //explicit doğrudan atama olduğunu belirtir
    explicit Mother(const string &name) : name(name) {}
    const string& getName()const{ return name;}
};
class Father{
private:
    string name;
public:
    explicit Father(const string &name) : name(name){}
    const string& getName()const{ return name;}

};
class Kid : public Mother, public Father{
    string name;
public:
    Kid(string motherName, string fatherName, string name) : Mother(motherName), Father(fatherName) {
        this->name = name;

    }
    void printInfoKids(){
        cout << "Mother Name = " << Mother::getName() << "\nFather Name = "
        << Father::getName() << "\nKid Name = " << name << endl;
    };
};


//Çoklu Kalıtım Diamond Problem Çözümü

class A{
public:
    int x;
    A(int x = 0) : x(x) {
        cout << "A Class" << endl;
    }
};
class B : virtual public A{
public:
    B() {
        cout << "B Class" << endl;
    }
};
class C : virtual public A{
public:
    C() {
        cout << "C Class" << endl;
    }
};
class D : public C, public B{
public:
    D() {
        cout << "D Class" << endl;
    }
};

int main() {

    Kid kid("Hore", "Mesut", "Yusuf");
    kid.printInfoKids();


    //d diye bir nesne oluşturulurken hem c nesnesi için hemde b nesnesi için A classından obje oluşturulacağı için
    //Bu durum sorun yaratabilir bu durumu önlemek için extend ederken inheritance access modifierdan önce bir
    //virtual eklemesi yapılır
    //Bu durumda D sınıfından nesne oluşturulurken A dan sanki miras almış gibi gözükür
    //B ve C nin aldığı miras ise sanal olucaktır
    /*
     * virtual kalıtım kullanılmazsa, D sınıfının A sınıfından iki ayrı örneği olurdu (B ve C'den gelen).
     * virtual kalıtım kullanarak, hiyerarşide yalnızca bir A örneği olacağından,
     * olası belirsizlikleri giderir ve gereksiz çoğaltmaların önüne geçer.
     * Bu, karmaşık sınıf hiyerarşileriyle uğraşırken diamond problemine bağlı
     * sorunları önlemek açısından önemli olabilir.
     */
    D d;



    return 0;
}
