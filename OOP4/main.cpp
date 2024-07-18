#include <iostream>
using namespace std;

class Nokta{
private:
    int x,y;
public:
    int* number;
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
    Nokta();
    Nokta(int,int);
    Nokta(const Nokta&);    //Sabit olarak alıcazki paramtrenin özellikleri değiştirilemesin
    void printElements();
    ~Nokta();

};

Nokta::Nokta(int x, int y) {
    this->x = x;
    this->y = y;
    number = new int (5);
}

Nokta::Nokta() {
    x = 0;
    y = 0;
}

Nokta::Nokta(const Nokta & nokta) {
    this->x = nokta.x;
    this->y = nokta.y;
    this->number = nokta.number;
}

void Nokta::printElements() {
    cout << "X = " << x << "\tY = " << y << "\tNumber = " << *number << endl;
}

Nokta::~Nokta() {
    delete number;
    //Memory Leak oluşumunu engellemek için yapılmıştır
    //Hata oluşturur çünkü bir kere serbest bırakılan bellek alanı
    // diğer nesne içinde serbest bırakılmaya çalışılıyor
}

int main() {

    Nokta nokta(1,2);
    Nokta nokta1(nokta);
    nokta.printElements();
    nokta1.printElements();

    *nokta1.number = 999;

    cout << "After the update : " << endl;
    nokta.printElements();
    nokta1.printElements();




    return 0;
}
