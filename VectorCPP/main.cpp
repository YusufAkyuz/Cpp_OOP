#include <iostream>
using namespace std;

template <typename T>
class Vector{
private:
    T* data;
    int index;
    int cap;//capasity kısaltması
public:
    Vector() : data(NULL),index(0),cap(1) {
        data = new T[cap];
    }
    int size() const{//vector içinde kaç eleman olduğunu gösterirken
        return index;
    }
    int capacity() const{//Vektorun genele kapasitesinin kaç olduğunu döndürecektir
        return cap;
    }
    void pushBack(const T& value) {
        data[index++] = value;
    }
    void popBack() {
        index--;
    }
};

int main() {

    Vector<int> vector1;
    cout << vector1.size() << endl;
    cout << vector1.capacity() << endl;

    vector <int> arr;
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << endl;
    }


    return 0;
}
