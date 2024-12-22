#include"Vehicle_factory.cpp"
#include <iostream>

using namespace std;

int main(){
    string vehicletype;
    cin>>vehicletype;

    Vehicle* vehicle =  Vehicle_factory::getvehicle(vehicletype);
    vehicle->createvehicle();
    return 0;
}