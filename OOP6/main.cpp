#include <iostream>
#include "Column.h"

using namespace std;

int main() {

    Column column(4);

    column.set(0,1);
    column.set(1,3);
    column.set(2,5);
    column.set(3,7);

    Column column1 = column;

    column.printData();
    column1.printData();

    (column1 + column).printData();

    Column column2 = column + 3;
    column2.printData();

    Column column3(5);
    column3.set(0,999);
    Column column4(5);
    column4 = column3;
    column3.printData();
    column4.printData();

    Column column5(5);
    for (int i = 0; i < column5.getDimension(); ++i) {
        column5.set(i,i);
    }
    column5.printData();
    for (int i = 0; i < column5.getDimension(); ++i) {
        cout << column5[i];
    }

    column5.printData();
    cout << "Opertor Overloaded" << endl;
    column5();

    column5(2,3);
    column5();

    cout << "\n\n------\n\n";

    Column column6(3);
    column6.set(0,10);
    column6.set(1,20);
    column6.set(2,30);

    column6++;
    column6();
    ++column6;
    column6();

    cout << "\n\n------\n\n";

    column6--;
    column6();
    --column6;
    column6();



    return 0;
}
