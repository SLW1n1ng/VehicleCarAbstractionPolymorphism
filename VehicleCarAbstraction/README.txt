Polymorphism and Abstraction Project
====================================

This project demonstrates the concepts of polymorphism and
abstraction in object-oriented programming. It involves a 
hierarchy of classes representing vehicles, including a base
class called `Vehicle` and two derived classes called `Car` and `Truck`.

File Structure:
---------------
- vehicle.h: Contains the declaration of the `Vehicle` class, 
which is an abstract base class defining the common attributes 
and behaviors of vehicles.
- vehicle.cpp: Defines the member functions of the `Vehicle` class.
- car.h: Contains the declaration of the `Car` class, which 
is derived from the `Vehicle` class and represents a specific type of vehicle.
- car.cpp: Defines the member functions of the `Car` class.
- truck.h: Contains the declaration of the `Truck` class, which 
is derived from the `Vehicle` class and represents another type of vehicle.
- truck.cpp: Defines the member functions of the `Truck` class.
- main.cpp: Implements the main function, demonstrating the 
usage of the vehicle hierarchy.

Classes:
--------
1. Vehicle:
   - Represents a generic vehicle with attributes such as make, model, and year.
   - Contains pure virtual functions `drive()` and `honk()` for polymorphic behavior.
   - Provides getter functions for retrieving vehicle details.

2. Car (Derived from Vehicle):
   - Represents a specific type of vehicle, inheriting from the `Vehicle` class.
   - Overrides the `drive()` and `honk()` functions to provide car-specific behavior.

3. Truck (Derived from Vehicle):
   - Represents another type of vehicle, inheriting from the `Vehicle` class.
   - Overrides the `drive()` and `honk()` functions to provide truck-specific behavior.
   - Includes an additional function `pullTrailer()` for demonstrating class-specific functionality.

Usage:
------
1. Create instances of `Car` and `Truck` objects, providing the make, model,
and year as parameters.
2. Use the `drive()` and `honk()` functions to perform vehicle-specific actions.
3. For trucks, the `pullTrailer()` function can be called to demonstrate the 
additional functionality.

Note: The program demonstrates polymorphism by creating base class pointers 
and assigning derived class objects to them. This allows calling the appropriate
functions based on the actual object type at runtime.


