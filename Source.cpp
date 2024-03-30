#include "Car.h"
#include "Lorry.h"
#include <iostream>
using namespace std;

int main() {
    Car c;
    cout << "Enter car details:\n";
    cin >> c;
    cout << c;

    Lorry l;
    cout << "Enter lorry details:\n";
    cin >> l;
    cout << l;

    cout << "Initial values: " << c << endl;
    ++c;
    cout << "After prefix increment: " << c << endl;
    c++;
    cout << "After postfix increment: " << c << endl;
    --c;
    cout << "After prefix decrement: " << c << endl;
    c--;
    cout << "After postfix decrement: " << c << endl;

    cout << "Before increment:\n" << l << endl;
    ++l;
    cout << "After prefix increment:\n" << l << endl;
    l++;
    cout << "After postfix increment:\n" << l << endl;
    --l;
    cout << "After prefix decrement:\n" << l << endl;
    l--;
    cout << "After postfix decrement:\n" << l << endl;

    cout << "Number of objects created: " << Object::getCount() << endl;

    return 0;
}
