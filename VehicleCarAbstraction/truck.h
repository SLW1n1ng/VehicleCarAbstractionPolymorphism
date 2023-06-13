#ifndef TRUCK_H
#define TRUCK_H

#include "vehicle.h"

class Truck : public Vehicle {
public:
    Truck(const std::string& make, const std::string& model, int year);

    void drive() const override;
    void honk() const override;
    void pullTrailer() const;
};

#endif  // TRUCK_H
