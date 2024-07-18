#include <iostream>
using namespace std;

class Nokta{
private:
    int x,y;
public:
    const int number;
    Nokta();
    Nokta(int,int,int);
    ~Nokta();

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);
    const void printElements();
    const Nokta meet()const;
};

Nokta::Nokta() : number(0){
    x = 0;
    y = 0;
}

Nokta::Nokta(int x, int y = 3, int number = 7777) : number(number){ //Default değer ataması yapılabilir
    // Eğer default değer atamasında tüm variableler için yapılırsa default const seçim hatası fırlatılır

    this->x = x;
    this->y = y;

}

int Nokta::getX() const {
    return x;
}

void Nokta::setX(int x) {
    Nokta::x = x;
}

int Nokta::getY() const {
    return y;
}

void Nokta::setY(int y) {
    Nokta::y = y;
}

const void Nokta::printElements() {
    cout << "X = " <<  x << "\tY = " << y << endl;
}

Nokta::~Nokta() {
    cout << "Destructor Metod Called for " << x << " " << y << endl;
}

const Nokta Nokta::meet() const { //İlk const bu fonks bir pointer dönecek ve dönecek olan pointerın
    // gösterdiği değerler değiştirilemez olduğunu gösterir. İkinci const ise bu metodun sınıf değişkenlerini
    // değiştiremeyeceğini garanti altına alır
    cout << "Hi User" << endl;
    return *new Nokta();
}

int main() {

    Nokta nokta;
    Nokta nokta1(10,20);
    Nokta nokta2(30);

    nokta.printElements();
    nokta1.printElements();
    nokta2.printElements();

    cout << "\n\n --------------- \n\n";

    //Pointer ve diziler constructorla kullanımı

    Nokta noktaArr[5] = {{1,2}, {7}, {4,5}};
    for (int i = 0; i < size(noktaArr); ++i) {
        noktaArr[i].printElements();
    }

    Nokta* nokta3 = new Nokta();
    nokta3->printElements();
    delete nokta3;

    //Const Instances
    //instance const olarak tanımlandığı için ancak const olan değerlere erisim sağlanabilecektir
    const Nokta nokta4(44,55);
    cout <<  "Nokta4 x = " << nokta4.getX() << "\t Nokta4 y = " << nokta4.getY() << endl;






    return 0;
}
