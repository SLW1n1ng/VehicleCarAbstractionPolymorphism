#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;

public:
    Vehicle(const std::string& make, const std::string& model, int year);
    virtual ~Vehicle();

    const std::string& getMake() const;
    const std::string& getModel() const;
    int getYear() const;

    virtual void drive() const = 0;
    virtual void honk() const = 0;
};

#endif  // VEHICLE_H
