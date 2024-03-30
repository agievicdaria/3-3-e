#include "Car.h"
using namespace std;
#include <iostream>
#include <sstream>

Car::Car() {
    brand = "";
    cylinders = 0;
    power = 0.0;
}

Car::Car(const string& brand, int cylinders, double power) {
    this->brand = brand;
    this->cylinders = cylinders;
    this->power = power;
}

Car::Car(const Car& secondCar) {
    brand = secondCar.brand;
    cylinders = secondCar.cylinders;
    power = secondCar.power;
}

Car::~Car() {}

Car& Car::operator=(const Car& secondCar) {
    if (this != &secondCar) {
        brand = secondCar.brand;
        cylinders = secondCar.cylinders;
        power = secondCar.power;
    }
    return *this;
}

ostream& operator<<(ostream& out, const Car& car) {
    out << string(car);
    return out;
}

istream& operator>>(istream& in, Car& car) {
    cout << "Enter brand: ";
    in >> car.brand;
    cout << "Enter cylinders: ";
    in >> car.cylinders;
    cout << "Enter power: ";
    in >> car.power;
    return in;
}

Car& Car::operator++() {
    cylinders++;
    return *this;
}

Car Car::operator++(int) {
    Car temp = *this;
    power++;
    return temp;
}

Car& Car::operator--() {
    cylinders--;
    return *this;
}

Car Car::operator--(int) {
    Car temp = *this;
    power--;
    return temp;
}

Car::operator string () const  {
    stringstream ss;
    ss << "Brand: " << brand << ", Cylinders: " << cylinders << ", Power: " << power << endl;
    return ss.str();
}
