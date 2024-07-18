#include <iostream>
using namespace std;


class Nokta{
    int a = 20;
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
    void printValues() {
        cout << "X Value of Point = " << this->getX() << "\tY Value of Point = " << this->getY() << endl;    }
    void setElements(int x, int y) {
        this->setX(x);
        this->setY(y);
    }

};

//Bazı durumlarda birden fazla geliştirici bir program üzerinde çalışabilir
//ve aynı isimde değişkenler kullanılması durumunda compiler hata verecektir bunu önlemek için namespace kullanılır
namespace developer1{
    int a = 123;
    void meet(){
        cout << "Hi" << endl;
    }
}
namespace developer2{
    int a = 456;
    void meet(){
        cout << "Hello" << endl;
    }
}



int main() {

    Nokta nokta;
    int xPoint, yPoint;
    nokta.setX(5);
    nokta.setY(10);

    nokta.printValues();

    //Bir pointer nesnesinin bir diğer nesnenin poiterını gösterme durumu

    Nokta * nokta2;
    nokta2 = &nokta;
    nokta2->printValues();

    //Bir pointer nesnesine dinamik bellek tahsisi işlemi gerçekleştirilebilir new sayesinde

    Nokta * nokta3;
    nokta3 = new Nokta;
    nokta3->setX(20);
    nokta3->setY(30);
    nokta3->printValues();

    cout << "\n\n ------------------------------------------------------------ \n\n";

    Nokta arr[10];
    Nokta * pArray;
    pArray = new Nokta[10];

    for (int i = 0; i < 10; ++i) {

        arr[i].setElements(i, i+2);
        (pArray + sizeof (Nokta) * i)->setElements(i, i+2); //Bİr değer elemana gitmek için her bir objenin boyutu kadar ileri gitmeliyiz

    }

    for (int i = 0; i < 10; ++i) {

        arr[i].printValues();
        (pArray + sizeof (Nokta) * i)->printValues(); //Bİr değer elemana gitmek için her bir objenin boyutu kadar ileri gitmeliyiz

    }

    //NAMESPACE
    //Bir değişken öncelikle var olunan scope içerisinde aranır eğer varsa kullanılır eğer yoksa globalde arama yapılır
    cout << developer1::a << endl;
    developer1::meet();
    cout << developer2::a << endl;
    developer2::meet();




    return 0;
}
