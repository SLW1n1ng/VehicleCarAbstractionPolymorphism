#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(const std::string& make, const std::string& model, int year)
    : make(make), model(model), year(year) {}

Vehicle::~Vehicle() {
    std::cout << "Destroying Vehicle" << std::endl;
}

const std::string& Vehicle::getMake() const {
    return make;
}

const std::string& Vehicle::getModel() const {
    return model;
}

int Vehicle::getYear() const {
    return year;
}
