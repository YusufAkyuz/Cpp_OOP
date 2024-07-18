#include <iostream>
using namespace std;

class A;


class Nokta{
private:
    int x,y;
public:
    int getX() const {
        return x;
    }

    void setX(int x) {
        Nokta::x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        Nokta::y = y;
    }
    void initializeElement(int x, int y){
        this->x = x;
        this->y = y;
    }

    //Mesela bir fonksiyonu class içerisnde decleration ettikten sonra
    //class dışında kullanma imkanımız var bu kullanım classın daha sade bir görüntüye
    //sahip olmasını sağlar bu metodların kullanımı yine nesne üzerinden sağlanır tabi
    void printElements();
    friend void updateX(Nokta&);

    //Classın class ile arkadaş olma durumu
    void setNumber(A&);
};

void Nokta::printElements() { //Burda kullanılan iki nokta üst üste bir scope operatörüdür
    cout << "X Value = " << x << "\nY Value = " << y << endl;
}

void updateX(Nokta &nokta) {
    nokta.x = 123;
}

class A{
private:
    int number;
public:
    int getNumber() const {
        return number;
    }

    void setNumber(int number) {
        A::number = number;
    }
    friend class Nokta;
};

void Nokta::setNumber(A &a) {
    a.number = 999;
}

//operator overloading metodunu friend olarak yazma
class Number{
private:
    int a;
public:
    int getA() const {
        return a;
    }

    void setA(int a) {
        Number::a = a;
    }

    friend ostream& operator << (ostream&, Number&);

};

ostream& operator << (ostream& o, Number & number){
    o << number.a;
    return o;
}


int main() {

    Nokta nokta;
    nokta.setX(10);
    nokta.setY(20);
    nokta.printElements();
    updateX(nokta);

    cout << "The new values of x = " << nokta.getX() << endl;

    Nokta nokta1;
    A a;
    a.setNumber(100);
    cout << "First number value of A class = " << a.getNumber() << endl;
    nokta1.setNumber(a);
    cout << "New number value of A class = " << a.getNumber() << endl;


    //operator friend
    Number number;
    number.setA(5);
    cout << number;

    return 0;
}
