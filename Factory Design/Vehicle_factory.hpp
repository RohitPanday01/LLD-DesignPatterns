#ifndef Vehicle_factory_hpp
#define Vehicle_factory_hpp

#include <iostream>
#include "Car.cpp"
#include "Bike.cpp"
using namespace std;

class Vehicle_factory {
    public :
      static Vehicle* getvehicle(string vehicleType);

};


#endif