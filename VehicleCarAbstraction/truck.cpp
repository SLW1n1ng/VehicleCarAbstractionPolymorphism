#include "truck.h"
#include <iostream>

Truck::Truck(const std::string& make, const std::string& model, int year)
    : Vehicle(make, model, year) {}

void Truck::drive() const {
    std::cout << "Driving the truck: " << std::endl;
}

void Truck::honk() const {
    std::cout << "Honk honk!" << std::endl;
}

void Truck::pullTrailer() const {
    std::cout << "Pulling a trailer..." << std::endl;
}
