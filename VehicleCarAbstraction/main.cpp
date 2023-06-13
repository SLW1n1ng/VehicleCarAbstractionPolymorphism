#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "truck.h"


int main() {
    Vehicle* vehicle = new Car("Honda", "Civic", 2022);     //Vehicle instance created.
    Vehicle* vehicle2 = new Truck("Ford", "F-150", 2023);   //Vehicle instance created.
    Car car("Toyota", "Corolla", 2023);                     //Car instance created.

    std::cout << "Vehicle new Car details:" << std::endl;           //Vehicle details
    std::cout << "Make: " << vehicle->getMake() << std::endl;
    std::cout << "Model: " << vehicle->getModel() << std::endl;
    std::cout << "Year: " << vehicle->getYear() << std::endl;

    std::cout << "\nVehicle new Truck details:" << std::endl;       //Vehicle details
    std::cout << "Make: " << vehicle2->getMake() << std::endl;
    std::cout << "Model: " << vehicle2->getModel() << std::endl;
    std::cout << "Year: " << vehicle2->getYear() << std::endl;

    std::cout << "\nCar details:" << std::endl;	            //Car details
    std::cout << "Make: " << car.getMake() << std::endl;
    std::cout << "Model: " << car.getModel() << std::endl;
    std::cout << "Year: " << car.getYear() << std::endl;
    std::cout << std::endl;

    std::cout << "Vehicle new Car is driving..." << std::endl;
    vehicle->drive();   // Polymorphic behavior - calls Car's drive() function
    vehicle->honk();    // Polymorphic behavior - calls Car's honk() function

    std::cout << "\nCar is driving...and honking" << std::endl;
    car.drive();        // Calls Car's drive() function
    car.honk();         // Calls Car's honk() function
    std::cout << std::endl;

    std::cout << "Vehicle new Truck is driving..." << std::endl;
    vehicle2->drive();   // Polymorphic behavior - calls Truck's drive() function
    vehicle2->honk();    // Polymorphic behavior - calls Truck's honk() function

    
    if (Truck* truck = dynamic_cast<Truck*>(vehicle2)) {// Check if vehicle2 is actually a Truck
        truck->pullTrailer();   // Accessing Truck's pullTrailer() function
    }
    std::cout << std::endl;

    delete vehicle;	    // Deletes the Vehicle instance
    delete vehicle2;    // Deletes the Vehicle instance

    return 0;
}
