#include "../Header/Nokta.h"
#include "iostream"
#include "math.h"

using namespace std;

int Nokta::counter = 0;

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

void Nokta::printElements() {
    cout << "X = " << x << "\tY = " << y << endl;
}

Nokta::Nokta() {
    x = 0;
    y = 0;
    counter++;
}

Nokta::Nokta(int x, int y) {
    counter++;
    this->x = x;
    this->y = y;
}

void Nokta::instaceCount() {
    cout << "The Number of Instance = " << counter << endl;
}

Nokta::~Nokta() {

    counter--;

}

double Nokta::calculateDistance(Nokta & nokta) {
    return sqrt( pow(this->x - nokta.getX(), 2) + pow(this->y - nokta.getY(),2) );
}

Nokta Nokta::add(const Nokta & nokta) const {
    return Nokta(nokta.getX() + this->getX(), nokta.getY() + this->getY());
}

