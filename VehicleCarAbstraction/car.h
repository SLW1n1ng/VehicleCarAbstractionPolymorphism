#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle {
public:
    Car(const std::string& make, const std::string& model, int year);

    void drive() const override;
    void honk() const override;
};

#endif  // CAR_H
