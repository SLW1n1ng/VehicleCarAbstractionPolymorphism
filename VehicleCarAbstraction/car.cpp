#include "car.h"
#include <iostream>

Car::Car(const std::string& make, const std::string& model, int year)
    : Vehicle(make, model, year) {}

void Car::drive() const {
    std::cout << "Driving the car... " << std::endl;
}

void Car::honk() const {
    std::cout << "Honk honk!" << std::endl;
}
