#include <iostream>
#include "time.h"
using namespace std;

#define kupa (0)
#define sinek (1)
#define maca (2)
#define karo (3)

#define as (0)
#define vale (10)
#define kiz (11)
#define kral (12)

class Kart{

private:
    int seri;
    int deger;
public:
    Kart(int seri = 0, int deger = 2) : seri(seri), deger(deger) {}

    int getSeri() const {
        return seri;
    }

    int getDeger() const {
        return deger;
    }
    void print()const{
        switch (seri) {
            case kupa:
                cout << "Kupa " ;
                break;
            case sinek:
                cout << "Sinek " ;
                break;
            case maca:
                cout << "Maca " ;
                break;
            case karo:
                cout << "Karo " ;
                break;
            default:
                cout << deger << endl;
        }

        switch (deger) {
            case as:
                cout << "As " ;
                break;
            case vale:
                cout << "Vale " ;
                break;
            case kiz:
                cout << "Kiz " ;
                break;
            case kral:
                cout << "Kral " ;
                break;
            default:
                cout << deger << endl;
        }


    }
};

class Deste{
    Kart kartlar[52];
public:
    int top = 0;
    Deste(){
        for (int i = 0; i < size(kartlar); ++i) {
            kartlar[i] = Kart(i/13, i%13);
        }
    }
    void printDeste(){
        for (int i = 0; i < size(kartlar); ++i) {
            kartlar[i].print();
        }
    }
    void mix(int kacDefa = 50) {
        Kart temp;
        for (int i = 0; i < kacDefa; ++i) {
            int x = rand() % 52;
            int y = rand() % 52;
            temp = kartlar[x];
            kartlar[x] = kartlar[y];
            kartlar[y] = temp;
        }
    }
    Kart getir() {
        return kartlar[top++];
    }
};

int main() {

    srand(time(0));

    Deste deste;
    deste.printDeste();
    deste.mix(30);
    cout << endl << endl;
    deste.printDeste();

    deste.getir().print();


    return 0;
}
