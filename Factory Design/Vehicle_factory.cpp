#include "Vehicle_factory.hpp"
#include<iostream>
using namespace std;

Vehicle* Vehicle_factory::getvehicle(string vehicleType){
    Vehicle* vehicle;
    if(vehicleType == "car"){
        vehicle = new Car();
    }

    if(vehicleType == "bike"){
        vehicle = new Bike();
    }

    vehicle->createvehicle();

    return 0;
}




