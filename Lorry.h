#pragma once
#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

class Lorry : public Car {
private:
    double payload;

public:
    Lorry();
    Lorry(const Car& car, double payload);
    Lorry(const Lorry& secondLorry);
    ~Lorry();

    void SetPayload(double payload);
    double GetPayload() const;
    
    operator string() const;
    Lorry& operator=(const Lorry& secondLorry);
    friend ostream& operator<<(ostream& out, const Lorry& lorry);
    friend istream& operator>>(istream& in, Lorry& lorry);
    Lorry& operator++();
    Lorry operator++(int);
    Lorry& operator--();
    Lorry operator--(int);
};
