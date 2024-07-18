#include <iostream>
using namespace std;

template <class T>
T artir(T x){
    return x+1;
}

template <class T>
void degistir(T&a, T&b){
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
class MyClass {
public:
    T data;
    MyClass(T data) : data(data) {}
};

template <class T>
class MyClass2{
    T* data;
    int index;
public:
    MyClass2() : index(0) {
        data = new T[100];
    }
    void ekle(T t) {
        data[index++] = t;
    }
    bool isEmpty() const{
        return index == 0;
    }
    void print()const {
        for (int i = 0; i < index; ++i) {
            cout << data[i] << " ";
        }
        if (!isEmpty()) {
            cout << endl;
        }
    }

    MyClass2<T> operator+(const MyClass2<T>& obj){
        MyClass2<T> temp;
        for (int i = 0; i < index; ++i) {
            temp.ekle(data[i] + obj.data[i]);
        }
        return temp;
    }
};


int main() {
    //Templateler sayesinde değişkenin belirlenmesi compiler'a bırakılır
    cout << artir(4) << endl;
    cout << artir(4.5) << endl;
    cout << artir(false) << endl;

    int a = 10;
    int b = 20;
    cout << a << "\t" << b << endl;
    degistir(a,b);
    cout << a << "\t" << b << endl;

    MyClass obj1(10);
    cout << obj1.data << endl;
    MyClass<int> obj2(10);
    cout << obj2.data << endl;

    ////////////////////////////////

    MyClass2<int> obj3, obj4;
    obj3.ekle(1);
    obj3.ekle(3);
    obj3.ekle(5);

    obj3.print();

    obj4.ekle(10);
    obj4.ekle(20);
    obj4.ekle(30);

    obj4.print();

    (obj3 + obj4).print();

    //*****************************

    MyClass2<string> obj5, obj6;
    obj5.ekle("1");
    obj5.ekle("3");
    obj5.ekle("5");

    obj5.print();

    obj6.ekle("10");
    obj6.ekle("20");
    obj6.ekle("30");

    obj6.print();


    (obj5 + obj6).print();

    return 0;
}
