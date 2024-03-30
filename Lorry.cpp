#include "Lorry.h"
using namespace std;
#include <iostream>
#include <sstream>

Lorry::Lorry() : Car(), payload(0.0) {}

Lorry::Lorry(const Car& car, double payload) : Car(car), payload(payload) {}

Lorry::Lorry(const Lorry& secondLorry) : Car(secondLorry), payload(secondLorry.payload) {}

Lorry::~Lorry() {}

void Lorry::SetPayload(double payload) {
    this->payload = payload;
}

double Lorry::GetPayload() const {
    return payload;
}

Lorry& Lorry::operator=(const Lorry& secondLorry) {
    if (this != &secondLorry) {
        Car::operator=(secondLorry);
        payload = secondLorry.payload;
    }
    return *this;
}

ostream& operator<<(ostream& out, const Lorry& Lorry) {
    out << string(Lorry);
    return out;
}

istream& operator>>(istream& in, Lorry& lorry) {
    Car& car = static_cast<Car&>(lorry);
    in >> car;
    cout << "Enter payload: ";
    in >> lorry.payload;
    return in;
}

Lorry::operator string() const {
    stringstream ss;
    ss << "Car: Brand: " << GetBrand() 
       << ", Cylinders: " << GetCylinders() 
       << ", Power: " << GetPower() 
       << ". Payload: " << payload << endl;
    return ss.str();
}

Lorry& Lorry::operator++() {
    ++payload;
    return *this;
}

Lorry Lorry::operator++(int) {
    Lorry temp = *this;
    ++payload;
    return temp;
}

Lorry& Lorry::operator--() {
    --payload;
    return *this;
}

Lorry Lorry::operator--(int) {
    Lorry temp = *this;
    --payload;
    return temp;
}
