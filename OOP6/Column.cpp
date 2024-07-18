#include "Column.h"
#include "iostream"

using namespace std;

int Column::getDimension() const {
    return dimension;
}

void Column::setDimension(int dimension) {
    Column::dimension = dimension;
}

Column::Column() {

}

Column::Column(int dimension) : dimension(dimension) {
    data = new int [dimension];
    cout << "Created!" << endl;
}

Column::~Column() {
    cout << "Destructor Called." << endl;
    delete[] data;
}

Column::Column(Column & column) {
    this->dimension = column.dimension;
    data = new int [column.dimension];
    for (int i = 0; i < dimension; ++i) {
        data[i] = column.data[i];
    }
    cout << "Copy Constructor Called" << endl;

}

Column Column::operator+(const Column & column) const {
    if(dimension == column.dimension){
        Column temp(dimension);
        for (int i = 0; i < dimension; ++i) {
            temp.data[i] = column.data[i] + this->data[i];

        }
        return temp;
    }
}

void Column::set(int index, int value) {
    this->data[index] = value;
}

void Column::printData() {
    for (int i = 0; i < dimension; ++i) {
        cout << i << " -> " << data[i] << endl;
    }

}

Column Column::operator+(const int i) const {
    Column temp(dimension);
    for (int j = 0; j < this->dimension; ++j) {
        temp.data[j] += i;
    }
    return temp;
}

void Column::operator=(const Column &column)  {
    delete[] data;
    dimension = column.dimension;
    data = new int(dimension);
    for (int i = 0; i < dimension; ++i) {
        data[i] = column.data[i];
    }
}

const int& Column::operator[](int indis) const {
    if (indis >= 0 && indis < dimension) {
        return data[indis];
    }
}

void Column::operator()() const {
    for (int i = 0; i < dimension; ++i) {
        cout << data[i] << endl;
    }

}

void Column::operator()(int i, int j) {
    int temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}

void Column::operator++(int) {
    for (int i = 0; i < dimension; ++i) {
        data[i] += 5;
    }
}
void Column::operator++() {
    for (int i = 0; i < dimension; ++i) {
        data[i] += 10;
    }
}
void Column::operator--(int) {
    for (int i = 0; i < dimension; ++i) {
        data[i] -= 5;
    }
}
void Column::operator--() {
    for (int i = 0; i < dimension; ++i) {
        data[i] -= 10;
    }
}





