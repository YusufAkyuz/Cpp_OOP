#include <iostream>
#include "Header/Nokta.h"
using namespace std;


int main() {


    Nokta nokta;
    Nokta nokta1(1,2);

    nokta.printElements();
    nokta1.printElements();

    nokta1.instaceCount();
    {
        Nokta nokta2;
        nokta2.instaceCount();
    }
    nokta1.instaceCount();

    Nokta nokta2(5,6);
    Nokta nokta3(2,2);
    cout << "Distance Between Nokta2 Nokta3 = " << nokta2.calculateDistance(nokta3) << endl;

    Nokta nokta4 = nokta2.add(nokta3);
    nokta4.printElements();


    return 0;
}
