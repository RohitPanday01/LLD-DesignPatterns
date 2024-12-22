#include <iostream>
#include "Car.cpp"
#include "Bike.cpp"

using namespace std;

int main(){
    string vehicletype;
    cin>>vehicletype;
    Vehicle* vehicle;
    if(vehicletype == "car"){
        vehicle = new Car();
    }

    if(vehicletype == "bike"){
        vehicle = new Bike();
    }

    vehicle->createvehicle();
    return 0 ;
}


