#include <iostream>
#include <string>
using namespace std;

typedef int* ptr;
void methos(ptr a, ptr& b) {
    *a = 12;
    *b = 10;
}

class NewClass{
public:
    static int a;
    NewClass(){
        a++;
    }

};



int main() {

    string newString("Yusuf");
    newString.append("Akyuz");//stringe ekleme yapıcak
    cout << newString << endl;

    string newString1("Yusuf");
    newString1.append("Computer Engineering", 5);//verdiğim parametreden ilk 5 karakteri ekle ilk stringe diyor
    cout << newString1 << endl;

    string newString2("Yusuf");
    newString2.append("Computer Engineering",0,5); //pos 0dan itibaren vereceğim stringden 5 karakter ekle diyor
    cout << newString2 << endl;

    string newString3("Yusuf");
    newString3.append(4,'C'); //stringe 4 tane c karakteri ekle der
    cout << newString3 << endl;

    string newString4("Yusuf");
    newString.assign("Akyuz");//stringi silip verilen parametreyi ekleyecek
    cout << newString << endl;

    string newString5("Yusuf");
    newString1.assign("Computer Engineering", 5);//stringi sil verdiğim parametreden ilk 5 karakteri ekle ilk stringe diyor
    cout << newString1 << endl;

    string newString6("Yusuf");
    newString2.assign("Computer Engineering",0,5); //stringi sil pos 0dan itibaren vereceğim stringden 5 karakter ekle diyor
    cout << newString2 << endl;

    string newString7("Yusuf");
    newString3.assign(4,'C'); //stringi sil 4 tane c karakteri ekle der
    cout << newString3 << endl;

    int* a = nullptr;
    int b = 2;
    a = &b;
    cout << a << endl;

    int i = 0, j = 0;
    int *pI,*pJ;
    pI = &i;
    pJ = &j;

    int arr[3] = {1,2,3};
    cout << *(arr) << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;

    methos(pI, pJ);
    cout << *pI << endl;
    cout << *pJ << endl;

    //Create string object with dynamic memory allocation

    string * str = new string ("Yusuf");
    delete str;

    string abc = "Yusuf";

    std::string stra = "ABCDEFGHIJKLxyzwMNOPQRSTUVWXYZ";
    stra.replace(11, 4, "AAB");
    std::cout << stra << std::endl;

    //Static memeber in class
    NewClass obj1;
    NewClass obj2;
    cout << obj1.a;

    return 0;
}
