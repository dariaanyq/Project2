#include <iostream>
#include "windows.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y;
    cout << "\nEnter x: ";
    cin >> x;
    cout << "\nEnter y: ";
    cin >> y;
    if ((x < 0 && y > 0) || (x < 0 && y < 0)) {
        cout << "\nLogical value: True";
    }
    else {
        cout << "\nLogical value: False";
    }

    system("pause");
    return 0;
}