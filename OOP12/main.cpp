#include <iostream>
#include "cmath"
using namespace std;

class Human{
public:
    string name;
    Human(string name = "") : name(name) { }
};
class Athlet : public Human{
public:
    string teamName;
    Athlet(string name, string teamName = "") : Human(name), teamName(teamName){}

};
class Programmer : public Human{
public:
    string progLanguage;
    Programmer(string name, string progLanguage = "") : Human(name), progLanguage(progLanguage){}

};

class Kedi{
public:
    virtual void sesVer(){
        cout << "Miyav" << endl;
    }
};
class Aslan : public Kedi{
public:
    void sesVer(){
        cout << "Kükre" << endl;
    }
};

//Abstract class
class Sekil{
public:
    virtual void sekilName() = 0;
    virtual void alanHesapla()const = 0;
};

class Dikdortgen : public Sekil{
public:
    int uzunKenar, kısaKenar;
    Dikdortgen(int uzunKenar, int kısaKenar) : uzunKenar(uzunKenar), kısaKenar(kısaKenar) {}
    void sekilName() {
        cout << "Bu bir dikdortgen" << endl;
    }
    void alanHesapla()const override{
        cout << "Alan = " << uzunKenar*kısaKenar << endl;
    }
};

class Daire : public Sekil{
public:
    int yarıCap;
    Daire(int yarıCap) : yarıCap(yarıCap){ }
    void sekilName() override {
        cout << "Bu bir daire" << endl;
    }
    void alanHesapla()const override{
        cout << "Alan = " << M_PI*yarıCap*yarıCap << endl;
    }
};


int main() {

    Human human("Ali");
    Athlet athlet("Mehmet", "Fenerbahce");
    Programmer programmer("Yusuf", "C++");

    //UpCasting
    Human* ptr[3];
    ptr[0] = &human;
    ptr[1] = &athlet;
    ptr[2] = &programmer;

    for (int i = 0; i < size(ptr); ++i) {
        cout << ptr[i]->name << endl;
    }

    //DownCasting

    Athlet* athletPtr = static_cast<Athlet *>(ptr[1]);
    Programmer* programmerPtr = static_cast<Programmer*>(ptr[2]);
    cout << athletPtr->teamName << endl;
    cout << programmerPtr->progLanguage << endl;

    //Polymorphism
    Kedi kedi;
    Aslan aslan;

    Kedi* kediPtr[2];
    kediPtr[0] = &kedi;
    kediPtr[1] = &aslan;

    kediPtr[0]->sesVer();
    kediPtr[1]->sesVer();//Aslanın metodunu kullanmasının sebebi basedeki metodun virtual tanımlanmasıdır

    //Abstract Class
    Sekil* sekilArr[2];
    sekilArr[0] = new Dikdortgen(10,2);
    sekilArr[1] = new Daire(2);

    for (int i = 0; i < size(sekilArr); ++i) {
        sekilArr[i]->sekilName();
    }



    return 0;
}
